// Copyright (c) 2020 RISC Software GmbH
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

#include <cassert>
#include "CPACSCurvePointListXYZ.h"
#include "CPACSProfileGeometry.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDObject.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSCurvePointListXYZ::CPACSCurvePointListXYZ(CPACSProfileGeometry* parent)
        : m_x(reinterpret_cast<CCPACSCurvePointListXYZ*>(this))
        , m_y(reinterpret_cast<CCPACSCurvePointListXYZ*>(this))
        , m_z(reinterpret_cast<CCPACSCurvePointListXYZ*>(this))
    {
        //assert(parent != NULL);
        m_parent = parent;
    }

    CPACSCurvePointListXYZ::~CPACSCurvePointListXYZ()
    {
    }

    const CPACSProfileGeometry* CPACSCurvePointListXYZ::GetParent() const
    {
        return m_parent;
    }

    CPACSProfileGeometry* CPACSCurvePointListXYZ::GetParent()
    {
        return m_parent;
    }

    const CTiglUIDObject* CPACSCurvePointListXYZ::GetNextUIDParent() const
    {
        return m_parent;
    }

    CTiglUIDObject* CPACSCurvePointListXYZ::GetNextUIDParent()
    {
        return m_parent;
    }

    void CPACSCurvePointListXYZ::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read element x
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/x")) {
            m_x.ReadCPACS(tixiHandle, xpath + "/x");
        }
        else {
            LOG(ERROR) << "Required element x is missing at xpath " << xpath;
        }

        // read element y
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/y")) {
            m_y.ReadCPACS(tixiHandle, xpath + "/y");
        }
        else {
            LOG(ERROR) << "Required element y is missing at xpath " << xpath;
        }

        // read element z
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/z")) {
            m_z.ReadCPACS(tixiHandle, xpath + "/z");
        }
        else {
            LOG(ERROR) << "Required element z is missing at xpath " << xpath;
        }

        // read element kinks
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/kinks")) {
            m_kinks = boost::in_place(reinterpret_cast<CCPACSCurvePointListXYZ*>(this));
            try {
                m_kinks->ReadCPACS(tixiHandle, xpath + "/kinks");
            } catch(const std::exception& e) {
                LOG(ERROR) << "Failed to read kinks at xpath " << xpath << ": " << e.what();
                m_kinks = boost::none;
            }
        }

        // read element parameterMap
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/parameterMap")) {
            m_parameterMap = boost::in_place(reinterpret_cast<CCPACSCurvePointListXYZ*>(this));
            try {
                m_parameterMap->ReadCPACS(tixiHandle, xpath + "/parameterMap");
            } catch(const std::exception& e) {
                LOG(ERROR) << "Failed to read parameterMap at xpath " << xpath << ": " << e.what();
                m_parameterMap = boost::none;
            }
        }

    }

    void CPACSCurvePointListXYZ::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        const std::vector<std::string> childElemOrder = { "x", "y", "z", "kinks", "parameterMap" };

        // write element x
        tixi::TixiCreateSequenceElementIfNotExists(tixiHandle, xpath + "/x", childElemOrder);
        m_x.WriteCPACS(tixiHandle, xpath + "/x");

        // write element y
        tixi::TixiCreateSequenceElementIfNotExists(tixiHandle, xpath + "/y", childElemOrder);
        m_y.WriteCPACS(tixiHandle, xpath + "/y");

        // write element z
        tixi::TixiCreateSequenceElementIfNotExists(tixiHandle, xpath + "/z", childElemOrder);
        m_z.WriteCPACS(tixiHandle, xpath + "/z");

        // write element kinks
        if (m_kinks) {
            tixi::TixiCreateSequenceElementIfNotExists(tixiHandle, xpath + "/kinks", childElemOrder);
            m_kinks->WriteCPACS(tixiHandle, xpath + "/kinks");
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/kinks")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/kinks");
            }
        }

        // write element parameterMap
        if (m_parameterMap) {
            tixi::TixiCreateSequenceElementIfNotExists(tixiHandle, xpath + "/parameterMap", childElemOrder);
            m_parameterMap->WriteCPACS(tixiHandle, xpath + "/parameterMap");
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/parameterMap")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/parameterMap");
            }
        }

    }

    const CCPACSStringVector& CPACSCurvePointListXYZ::GetX() const
    {
        return m_x;
    }

    CCPACSStringVector& CPACSCurvePointListXYZ::GetX()
    {
        return m_x;
    }

    const CCPACSStringVector& CPACSCurvePointListXYZ::GetY() const
    {
        return m_y;
    }

    CCPACSStringVector& CPACSCurvePointListXYZ::GetY()
    {
        return m_y;
    }

    const CCPACSStringVector& CPACSCurvePointListXYZ::GetZ() const
    {
        return m_z;
    }

    CCPACSStringVector& CPACSCurvePointListXYZ::GetZ()
    {
        return m_z;
    }

    const boost::optional<CCPACSStringVector>& CPACSCurvePointListXYZ::GetKinks() const
    {
        return m_kinks;
    }

    boost::optional<CCPACSStringVector>& CPACSCurvePointListXYZ::GetKinks()
    {
        return m_kinks;
    }

    const boost::optional<CCPACSCurveParamPointMap>& CPACSCurvePointListXYZ::GetParameterMap() const
    {
        return m_parameterMap;
    }

    boost::optional<CCPACSCurveParamPointMap>& CPACSCurvePointListXYZ::GetParameterMap()
    {
        return m_parameterMap;
    }

    CCPACSStringVector& CPACSCurvePointListXYZ::GetKinks(CreateIfNotExistsTag)
    {
        if (!m_kinks)
            m_kinks = boost::in_place(reinterpret_cast<CCPACSCurvePointListXYZ*>(this));
        return *m_kinks;
    }

    void CPACSCurvePointListXYZ::RemoveKinks()
    {
        m_kinks = boost::none;
    }

    CCPACSCurveParamPointMap& CPACSCurvePointListXYZ::GetParameterMap(CreateIfNotExistsTag)
    {
        if (!m_parameterMap)
            m_parameterMap = boost::in_place(reinterpret_cast<CCPACSCurvePointListXYZ*>(this));
        return *m_parameterMap;
    }

    void CPACSCurvePointListXYZ::RemoveParameterMap()
    {
        m_parameterMap = boost::none;
    }

} // namespace generated
} // namespace tigl