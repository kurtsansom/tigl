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

#include "CPACSNacelleCowl.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSNacelleCowl::CPACSNacelleCowl(CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
        , m_transformation(m_uidMgr)
        , m_sections(m_uidMgr)
    {
    }

    CPACSNacelleCowl::~CPACSNacelleCowl()
    {
        if (m_uidMgr) m_uidMgr->TryUnregisterObject(m_uID);
    }

    CTiglUIDManager& CPACSNacelleCowl::GetUIDManager()
    {
        return *m_uidMgr;
    }

    const CTiglUIDManager& CPACSNacelleCowl::GetUIDManager() const
    {
        return *m_uidMgr;
    }

    void CPACSNacelleCowl::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
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

        // read element transformation
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/transformation")) {
            m_transformation.ReadCPACS(tixiHandle, xpath + "/transformation");
        }
        else {
            LOG(ERROR) << "Required element transformation is missing at xpath " << xpath;
        }

        // read element sections
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/sections")) {
            m_sections.ReadCPACS(tixiHandle, xpath + "/sections");
        }
        else {
            LOG(ERROR) << "Required element sections is missing at xpath " << xpath;
        }

        // read element guideCurves
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/guideCurves")) {
            m_guideCurves.ReadCPACS(tixiHandle, xpath + "/guideCurves");
        }
        else {
            LOG(ERROR) << "Required element guideCurves is missing at xpath " << xpath;
        }

        // read element rotationCurve
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/rotationCurve")) {
            m_rotationCurve.ReadCPACS(tixiHandle, xpath + "/rotationCurve");
        }
        else {
            LOG(ERROR) << "Required element rotationCurve is missing at xpath " << xpath;
        }

        if (m_uidMgr && !m_uID.empty()) m_uidMgr->RegisterObject(m_uID, *this);
    }

    void CPACSNacelleCowl::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write attribute uID
        tixi::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);

        // write element transformation
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/transformation");
        m_transformation.WriteCPACS(tixiHandle, xpath + "/transformation");

        // write element sections
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/sections");
        m_sections.WriteCPACS(tixiHandle, xpath + "/sections");

        // write element guideCurves
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/guideCurves");
        m_guideCurves.WriteCPACS(tixiHandle, xpath + "/guideCurves");

        // write element rotationCurve
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/rotationCurve");
        m_rotationCurve.WriteCPACS(tixiHandle, xpath + "/rotationCurve");

    }

    const std::string& CPACSNacelleCowl::GetUID() const
    {
        return m_uID;
    }

    void CPACSNacelleCowl::SetUID(const std::string& value)
    {
        if (m_uidMgr) {
            m_uidMgr->TryUnregisterObject(m_uID);
            m_uidMgr->RegisterObject(value, *this);
        }
        m_uID = value;
    }

    const CCPACSTransformation& CPACSNacelleCowl::GetTransformation() const
    {
        return m_transformation;
    }

    CCPACSTransformation& CPACSNacelleCowl::GetTransformation()
    {
        return m_transformation;
    }

    const CCPACSNacelleSections& CPACSNacelleCowl::GetSections() const
    {
        return m_sections;
    }

    CCPACSNacelleSections& CPACSNacelleCowl::GetSections()
    {
        return m_sections;
    }

    const CCPACSNacelleGuideCurves& CPACSNacelleCowl::GetGuideCurves() const
    {
        return m_guideCurves;
    }

    CCPACSNacelleGuideCurves& CPACSNacelleCowl::GetGuideCurves()
    {
        return m_guideCurves;
    }

    const CPACSRotationCurve& CPACSNacelleCowl::GetRotationCurve() const
    {
        return m_rotationCurve;
    }

    CPACSRotationCurve& CPACSNacelleCowl::GetRotationCurve()
    {
        return m_rotationCurve;
    }

} // namespace generated
} // namespace tigl
