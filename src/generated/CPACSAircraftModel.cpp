// Copyright (c) 2016 RISC Software GmbH
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

#include "TixiHelper.h"
#include "CTiglLogging.h"
#include "CTiglError.h"
#include "CPACSAircraftModel.h"

namespace tigl
{
    namespace generated
    {
        CPACSAircraftModel::CPACSAircraftModel(){}
        CPACSAircraftModel::~CPACSAircraftModel() {}
        
        void CPACSAircraftModel::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            else {
                LOG(ERROR) << "Required attribute uID is missing";
            }
            
            // read element name
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/name")) {
                m_name = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/name");
            }
            else {
                LOG(ERROR) << "Required element name is missing";
            }
            
            // read element description
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/description")) {
                m_description = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/description");
            }
            
            // read element fuselages
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/fuselages")) {
                m_fuselages = boost::in_place(reinterpret_cast<CCPACSAircraftModel*>(this));
                try {
                    m_fuselages->ReadCPACS(tixiHandle, xpath + "/fuselages");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read fuselages at xpath << " << xpath << ": " << e.what();
                    m_fuselages = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read fuselages at xpath << " << xpath << ": " << e.getError();
                    m_fuselages = boost::none;
                }
            }
            
            // read element wings
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/wings")) {
                m_wings = boost::in_place(reinterpret_cast<CCPACSAircraftModel*>(this));
                try {
                    m_wings->ReadCPACS(tixiHandle, xpath + "/wings");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read wings at xpath << " << xpath << ": " << e.what();
                    m_wings = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read wings at xpath << " << xpath << ": " << e.getError();
                    m_wings = boost::none;
                }
            }
            
            // read element genericGeometryComponents
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/genericGeometryComponents")) {
                m_genericGeometryComponents = boost::in_place(reinterpret_cast<CCPACSAircraftModel*>(this));
                try {
                    m_genericGeometryComponents->ReadCPACS(tixiHandle, xpath + "/genericGeometryComponents");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read genericGeometryComponents at xpath << " << xpath << ": " << e.what();
                    m_genericGeometryComponents = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read genericGeometryComponents at xpath << " << xpath << ": " << e.getError();
                    m_genericGeometryComponents = boost::none;
                }
            }
            
        }
        
        void CPACSAircraftModel::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/uID");
            tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);
            
            // write element name
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/name");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/name", m_name);
            
            // write element description
            if (m_description) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/description");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/description", *m_description);
            }
            
            // write element fuselages
            if (m_fuselages) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/fuselages");
                m_fuselages->WriteCPACS(tixiHandle, xpath + "/fuselages");
            }
            
            // write element wings
            if (m_wings) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/wings");
                m_wings->WriteCPACS(tixiHandle, xpath + "/wings");
            }
            
            // write element genericGeometryComponents
            if (m_genericGeometryComponents) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/genericGeometryComponents");
                m_genericGeometryComponents->WriteCPACS(tixiHandle, xpath + "/genericGeometryComponents");
            }
            
        }
        
        const std::string& CPACSAircraftModel::GetUID() const
        {
            return m_uID;
        }
        
        void CPACSAircraftModel::SetUID(const std::string& value)
        {
            m_uID = value;
        }
        
        const std::string& CPACSAircraftModel::GetName() const
        {
            return m_name;
        }
        
        void CPACSAircraftModel::SetName(const std::string& value)
        {
            m_name = value;
        }
        
        bool CPACSAircraftModel::HasDescription() const
        {
            return static_cast<bool>(m_description);
        }
        
        const std::string& CPACSAircraftModel::GetDescription() const
        {
            return *m_description;
        }
        
        void CPACSAircraftModel::SetDescription(const std::string& value)
        {
            m_description = value;
        }
        
        bool CPACSAircraftModel::HasFuselages() const
        {
            return static_cast<bool>(m_fuselages);
        }
        
        const CCPACSFuselages& CPACSAircraftModel::GetFuselages() const
        {
            return *m_fuselages;
        }
        
        CCPACSFuselages& CPACSAircraftModel::GetFuselages()
        {
            return *m_fuselages;
        }
        
        bool CPACSAircraftModel::HasWings() const
        {
            return static_cast<bool>(m_wings);
        }
        
        const CCPACSWings& CPACSAircraftModel::GetWings() const
        {
            return *m_wings;
        }
        
        CCPACSWings& CPACSAircraftModel::GetWings()
        {
            return *m_wings;
        }
        
        bool CPACSAircraftModel::HasGenericGeometryComponents() const
        {
            return static_cast<bool>(m_genericGeometryComponents);
        }
        
        const CCPACSExternalObjects& CPACSAircraftModel::GetGenericGeometryComponents() const
        {
            return *m_genericGeometryComponents;
        }
        
        CCPACSExternalObjects& CPACSAircraftModel::GetGenericGeometryComponents()
        {
            return *m_genericGeometryComponents;
        }
        
    }
}
