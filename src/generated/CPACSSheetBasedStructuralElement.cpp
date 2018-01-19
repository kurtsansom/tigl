// Copyright (c) 2018 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "CPACSSheetBasedStructuralElement.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSSheetBasedStructuralElement::CPACSSheetBasedStructuralElement(CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
    {
    }

    CPACSSheetBasedStructuralElement::~CPACSSheetBasedStructuralElement()
    {
        if (m_uidMgr) m_uidMgr->TryUnregisterObject(m_uID);
    }

    CTiglUIDManager& CPACSSheetBasedStructuralElement::GetUIDManager()
    {
        return *m_uidMgr;
    }

    const CTiglUIDManager& CPACSSheetBasedStructuralElement::GetUIDManager() const
    {
        return *m_uidMgr;
    }

    void CPACSSheetBasedStructuralElement::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read attribute uID
        if (tixi::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
            m_uID = tixi::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            if (m_uID.empty()) {
                LOG(WARNING) << "Required attribute uID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required attribute uID is missing at xpath " << xpath;
        }

        // read element materialDefinition
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/materialDefinition")) {
            m_materialDefinition.ReadCPACS(tixiHandle, xpath + "/materialDefinition");
        }
        else {
            LOG(ERROR) << "Required element materialDefinition is missing at xpath " << xpath;
        }

        if (m_uidMgr && !m_uID.empty()) m_uidMgr->RegisterObject(m_uID, *this);
    }

    void CPACSSheetBasedStructuralElement::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write attribute uID
        tixi::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);

        // write element materialDefinition
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/materialDefinition");
        m_materialDefinition.WriteCPACS(tixiHandle, xpath + "/materialDefinition");

    }

    const std::string& CPACSSheetBasedStructuralElement::GetUID() const
    {
        return m_uID;
    }

    void CPACSSheetBasedStructuralElement::SetUID(const std::string& value)
    {
        if (m_uidMgr) {
            m_uidMgr->TryUnregisterObject(m_uID);
            m_uidMgr->RegisterObject(value, *this);
        }
        m_uID = value;
    }

    const CCPACSMaterialDefinition& CPACSSheetBasedStructuralElement::GetMaterialDefinition() const
    {
        return m_materialDefinition;
    }

    CCPACSMaterialDefinition& CPACSSheetBasedStructuralElement::GetMaterialDefinition()
    {
        return m_materialDefinition;
    }

} // namespace generated
} // namespace tigl
