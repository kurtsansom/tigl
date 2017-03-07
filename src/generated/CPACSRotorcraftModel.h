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

#pragma once

#include <tixi.h>
#include <string>
#include <boost/optional.hpp>
#include "tigl_internal.h"
#include <CCPACSFuselages.h>
#include <CCPACSWings.h>
#include <CCPACSRotors.h>
#include <CCPACSRotorBlades.h>

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSRotorcraft
        
        // generated from /xsd:schema/xsd:complexType[751]
        class CPACSRotorcraftModel
        {
        public:
            TIGL_EXPORT CPACSRotorcraftModel();
            TIGL_EXPORT virtual ~CPACSRotorcraftModel();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT const std::string& GetName() const;
            TIGL_EXPORT void SetName(const std::string& value);
            
            TIGL_EXPORT bool HasDescription() const;
            TIGL_EXPORT const std::string& GetDescription() const;
            TIGL_EXPORT void SetDescription(const std::string& value);
            
            TIGL_EXPORT bool HasFuselages() const;
            TIGL_EXPORT const CCPACSFuselages& GetFuselages() const;
            TIGL_EXPORT CCPACSFuselages& GetFuselages();
            
            TIGL_EXPORT bool HasWings() const;
            TIGL_EXPORT const CCPACSWings& GetWings() const;
            TIGL_EXPORT CCPACSWings& GetWings();
            
            TIGL_EXPORT bool HasRotors() const;
            TIGL_EXPORT const CCPACSRotors& GetRotors() const;
            TIGL_EXPORT CCPACSRotors& GetRotors();
            
            TIGL_EXPORT bool HasRotorBlades() const;
            TIGL_EXPORT const CCPACSRotorBlades& GetRotorBlades() const;
            TIGL_EXPORT CCPACSRotorBlades& GetRotorBlades();
            
        protected:
            std::string                        m_uID;
            std::string                        m_name;
            boost::optional<std::string>       m_description;
            boost::optional<CCPACSFuselages>   m_fuselages;
            boost::optional<CCPACSWings>       m_wings;
            boost::optional<CCPACSRotors>      m_rotors;
            boost::optional<CCPACSRotorBlades> m_rotorBlades;
            
        private:
            #ifdef HAVE_CPP11
            CPACSRotorcraftModel(const CPACSRotorcraftModel&) = delete;
            CPACSRotorcraftModel& operator=(const CPACSRotorcraftModel&) = delete;
            
            CPACSRotorcraftModel(CPACSRotorcraftModel&&) = delete;
            CPACSRotorcraftModel& operator=(CPACSRotorcraftModel&&) = delete;
            #else
            CPACSRotorcraftModel(const CPACSRotorcraftModel&);
            CPACSRotorcraftModel& operator=(const CPACSRotorcraftModel&);
            #endif
        };
    }
    
    // This type is customized, use type CCPACSRotorcraftModel
}
