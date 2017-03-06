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

#include <string>
#include <cctype>

#include "CTiglError.h"

namespace tigl
{
    namespace generated
    {
        // This enum is used in:
        // CPACSDeck_type
        
        // generated from /xsd:schema/xsd:complexType[251]/xsd:complexContent/xsd:extension/xsd:sequence/xsd:element[6]/xsd:complexType/xsd:simpleContent
        #ifdef HAVE_CPP11
        enum class CPACSDeck_type_SimpleContent
        #else
        enum CPACSDeck_type_SimpleContent
        #endif
        {
            passenger,
            VIP,
            cargo,
            lifeStock
        };
        
        #ifdef HAVE_CPP11
        inline std::string CPACSDeck_type_SimpleContentToString(const CPACSDeck_type_SimpleContent& value)
        {
            switch(value) {
            case CPACSDeck_type_SimpleContent::passenger: return "passenger";
            case CPACSDeck_type_SimpleContent::VIP: return "VIP";
            case CPACSDeck_type_SimpleContent::cargo: return "cargo";
            case CPACSDeck_type_SimpleContent::lifeStock: return "lifeStock";
            default: throw CTiglError("Invalid enum value \"" + std::to_string(static_cast<int>(value)) + "\" for enum type CPACSDeck_type_SimpleContent");
            }
        }
        inline CPACSDeck_type_SimpleContent stringToCPACSDeck_type_SimpleContent(const std::string& value)
        {
            auto toLower = [](std::string str) { for (char& c : str) { c = std::tolower(c); } return str; };
            if (toLower(value) == "passenger") { return CPACSDeck_type_SimpleContent::passenger; }
            if (toLower(value) == "vip") { return CPACSDeck_type_SimpleContent::VIP; }
            if (toLower(value) == "cargo") { return CPACSDeck_type_SimpleContent::cargo; }
            if (toLower(value) == "lifestock") { return CPACSDeck_type_SimpleContent::lifeStock; }
            throw CTiglError("Invalid string value \"" + value + "\" for enum type CPACSDeck_type_SimpleContent");
        }
        #else
        inline std::string CPACSDeck_type_SimpleContentToString(const CPACSDeck_type_SimpleContent& value)
        {
            switch(value) {
            case passenger: return "passenger";
            case VIP: return "VIP";
            case cargo: return "cargo";
            case lifeStock: return "lifeStock";
            default: throw CTiglError("Invalid enum value \"" + std::to_string(static_cast<int>(value)) + "\" for enum type CPACSDeck_type_SimpleContent");
            }
        }
        inline CPACSDeck_type_SimpleContent stringToCPACSDeck_type_SimpleContent(const std::string& value)
        {
            struct ToLower { std::string operator()(std::string str) { for (char& c : str) { c = std::tolower(c); } return str; } } toLower;
            if (toLower(value) == "passenger") { return passenger; }
            if (toLower(value) == "vip") { return VIP; }
            if (toLower(value) == "cargo") { return cargo; }
            if (toLower(value) == "lifestock") { return lifeStock; }
            throw CTiglError("Invalid string value \"" + value + "\" for enum type CPACSDeck_type_SimpleContent");
        }
        #endif
    }
}
