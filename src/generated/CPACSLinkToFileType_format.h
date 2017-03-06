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
        // CPACSLinkToFile
        
        // generated from /xsd:schema/xsd:complexType[486]/xsd:complexContent/xsd:extension/xsd:attribute[1]/xsd:simpleType
        #ifdef HAVE_CPP11
        enum class CPACSLinkToFileType_format
        #else
        enum CPACSLinkToFileType_format
        #endif
        {
            Step,
            Iges,
            Stl
        };
        
        #ifdef HAVE_CPP11
        inline std::string CPACSLinkToFileType_formatToString(const CPACSLinkToFileType_format& value)
        {
            switch(value) {
            case CPACSLinkToFileType_format::Step: return "Step";
            case CPACSLinkToFileType_format::Iges: return "Iges";
            case CPACSLinkToFileType_format::Stl: return "Stl";
            default: throw CTiglError("Invalid enum value \"" + std::to_string(static_cast<int>(value)) + "\" for enum type CPACSLinkToFileType_format");
            }
        }
        inline CPACSLinkToFileType_format stringToCPACSLinkToFileType_format(const std::string& value)
        {
            auto toLower = [](std::string str) { for (char& c : str) { c = std::tolower(c); } return str; };
            if (toLower(value) == "step") { return CPACSLinkToFileType_format::Step; }
            if (toLower(value) == "iges") { return CPACSLinkToFileType_format::Iges; }
            if (toLower(value) == "stl") { return CPACSLinkToFileType_format::Stl; }
            throw CTiglError("Invalid string value \"" + value + "\" for enum type CPACSLinkToFileType_format");
        }
        #else
        inline std::string CPACSLinkToFileType_formatToString(const CPACSLinkToFileType_format& value)
        {
            switch(value) {
            case Step: return "Step";
            case Iges: return "Iges";
            case Stl: return "Stl";
            default: throw CTiglError("Invalid enum value \"" + std::to_string(static_cast<int>(value)) + "\" for enum type CPACSLinkToFileType_format");
            }
        }
        inline CPACSLinkToFileType_format stringToCPACSLinkToFileType_format(const std::string& value)
        {
            struct ToLower { std::string operator()(std::string str) { for (char& c : str) { c = std::tolower(c); } return str; } } toLower;
            if (toLower(value) == "step") { return Step; }
            if (toLower(value) == "iges") { return Iges; }
            if (toLower(value) == "stl") { return Stl; }
            throw CTiglError("Invalid string value \"" + value + "\" for enum type CPACSLinkToFileType_format");
        }
        #endif
    }
}
