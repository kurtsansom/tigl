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

#include "CPACSGlobalBeamProperties.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSGlobalBeamProperties::CPACSGlobalBeamProperties(CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
        , m_consistancy(0)
        , m_beamCrossSection(m_uidMgr)
        , m_beamCOG(m_uidMgr)
    {
    }

    CPACSGlobalBeamProperties::~CPACSGlobalBeamProperties()
    {
        if (m_uidMgr) m_uidMgr->TryUnregisterObject(m_uID);
    }

    CTiglUIDManager& CPACSGlobalBeamProperties::GetUIDManager()
    {
        return *m_uidMgr;
    }

    const CTiglUIDManager& CPACSGlobalBeamProperties::GetUIDManager() const
    {
        return *m_uidMgr;
    }

    void CPACSGlobalBeamProperties::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
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

        // read element source
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/source")) {
            m_source = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/source");
            if (m_source.empty()) {
                LOG(WARNING) << "Required element source is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required element source is missing at xpath " << xpath;
        }

        // read element consistancy
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/consistancy")) {
            m_consistancy = tixi::TixiGetElement<bool>(tixiHandle, xpath + "/consistancy");
        }
        else {
            LOG(ERROR) << "Required element consistancy is missing at xpath " << xpath;
        }

        // read element beamCrossSection
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/beamCrossSection")) {
            m_beamCrossSection.ReadCPACS(tixiHandle, xpath + "/beamCrossSection");
        }
        else {
            LOG(ERROR) << "Required element beamCrossSection is missing at xpath " << xpath;
        }

        // read element beamCOG
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/beamCOG")) {
            m_beamCOG.ReadCPACS(tixiHandle, xpath + "/beamCOG");
        }
        else {
            LOG(ERROR) << "Required element beamCOG is missing at xpath " << xpath;
        }

        // read element beamShearCenter
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/beamShearCenter")) {
            m_beamShearCenter = boost::in_place(m_uidMgr);
            try {
                m_beamShearCenter->ReadCPACS(tixiHandle, xpath + "/beamShearCenter");
            } catch(const std::exception& e) {
                LOG(ERROR) << "Failed to read beamShearCenter at xpath " << xpath << ": " << e.what();
                m_beamShearCenter = boost::none;
            }
        }

        // read element beamStiffness
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/beamStiffness")) {
            m_beamStiffness = boost::in_place(m_uidMgr);
            try {
                m_beamStiffness->ReadCPACS(tixiHandle, xpath + "/beamStiffness");
            } catch(const std::exception& e) {
                LOG(ERROR) << "Failed to read beamStiffness at xpath " << xpath << ": " << e.what();
                m_beamStiffness = boost::none;
            }
        }

        // read element beamSpecificMass
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/beamSpecificMass")) {
            m_beamSpecificMass = tixi::TixiGetElement<double>(tixiHandle, xpath + "/beamSpecificMass");
        }

        if (m_uidMgr && !m_uID.empty()) m_uidMgr->RegisterObject(m_uID, *this);
    }

    void CPACSGlobalBeamProperties::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write attribute uID
        tixi::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);

        // write element source
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/source");
        tixi::TixiSaveElement(tixiHandle, xpath + "/source", m_source);

        // write element consistancy
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/consistancy");
        tixi::TixiSaveElement(tixiHandle, xpath + "/consistancy", m_consistancy);

        // write element beamCrossSection
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/beamCrossSection");
        m_beamCrossSection.WriteCPACS(tixiHandle, xpath + "/beamCrossSection");

        // write element beamCOG
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/beamCOG");
        m_beamCOG.WriteCPACS(tixiHandle, xpath + "/beamCOG");

        // write element beamShearCenter
        if (m_beamShearCenter) {
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/beamShearCenter");
            m_beamShearCenter->WriteCPACS(tixiHandle, xpath + "/beamShearCenter");
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/beamShearCenter")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/beamShearCenter");
            }
        }

        // write element beamStiffness
        if (m_beamStiffness) {
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/beamStiffness");
            m_beamStiffness->WriteCPACS(tixiHandle, xpath + "/beamStiffness");
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/beamStiffness")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/beamStiffness");
            }
        }

        // write element beamSpecificMass
        if (m_beamSpecificMass) {
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/beamSpecificMass");
            tixi::TixiSaveElement(tixiHandle, xpath + "/beamSpecificMass", *m_beamSpecificMass);
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/beamSpecificMass")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/beamSpecificMass");
            }
        }

    }

    const std::string& CPACSGlobalBeamProperties::GetUID() const
    {
        return m_uID;
    }

    void CPACSGlobalBeamProperties::SetUID(const std::string& value)
    {
        if (m_uidMgr) {
            m_uidMgr->TryUnregisterObject(m_uID);
            m_uidMgr->RegisterObject(value, *this);
        }
        m_uID = value;
    }

    const std::string& CPACSGlobalBeamProperties::GetSource() const
    {
        return m_source;
    }

    void CPACSGlobalBeamProperties::SetSource(const std::string& value)
    {
        m_source = value;
    }

    const bool& CPACSGlobalBeamProperties::GetConsistancy() const
    {
        return m_consistancy;
    }

    void CPACSGlobalBeamProperties::SetConsistancy(const bool& value)
    {
        m_consistancy = value;
    }

    const CPACSBeamCrossSection& CPACSGlobalBeamProperties::GetBeamCrossSection() const
    {
        return m_beamCrossSection;
    }

    CPACSBeamCrossSection& CPACSGlobalBeamProperties::GetBeamCrossSection()
    {
        return m_beamCrossSection;
    }

    const CCPACSPointXY& CPACSGlobalBeamProperties::GetBeamCOG() const
    {
        return m_beamCOG;
    }

    CCPACSPointXY& CPACSGlobalBeamProperties::GetBeamCOG()
    {
        return m_beamCOG;
    }

    const boost::optional<CCPACSPointXY>& CPACSGlobalBeamProperties::GetBeamShearCenter() const
    {
        return m_beamShearCenter;
    }

    boost::optional<CCPACSPointXY>& CPACSGlobalBeamProperties::GetBeamShearCenter()
    {
        return m_beamShearCenter;
    }

    const boost::optional<CPACSBeamStiffness>& CPACSGlobalBeamProperties::GetBeamStiffness() const
    {
        return m_beamStiffness;
    }

    boost::optional<CPACSBeamStiffness>& CPACSGlobalBeamProperties::GetBeamStiffness()
    {
        return m_beamStiffness;
    }

    const boost::optional<double>& CPACSGlobalBeamProperties::GetBeamSpecificMass() const
    {
        return m_beamSpecificMass;
    }

    void CPACSGlobalBeamProperties::SetBeamSpecificMass(const boost::optional<double>& value)
    {
        m_beamSpecificMass = value;
    }

    CCPACSPointXY& CPACSGlobalBeamProperties::GetBeamShearCenter(CreateIfNotExistsTag)
    {
        if (!m_beamShearCenter)
            m_beamShearCenter = boost::in_place(m_uidMgr);
        return *m_beamShearCenter;
    }

    void CPACSGlobalBeamProperties::RemoveBeamShearCenter()
    {
        m_beamShearCenter = boost::none;
    }

    CPACSBeamStiffness& CPACSGlobalBeamProperties::GetBeamStiffness(CreateIfNotExistsTag)
    {
        if (!m_beamStiffness)
            m_beamStiffness = boost::in_place(m_uidMgr);
        return *m_beamStiffness;
    }

    void CPACSGlobalBeamProperties::RemoveBeamStiffness()
    {
        m_beamStiffness = boost::none;
    }

} // namespace generated
} // namespace tigl
