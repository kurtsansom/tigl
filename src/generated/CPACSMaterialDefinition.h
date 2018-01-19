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

#pragma once

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <string>
#include <tixi.h>
#include <typeinfo>
#include "CTiglError.h"
#include "tigl_internal.h"

namespace tigl
{
namespace generated
{
    // This class is used in:
    // CPACSCap
    // CPACSSheetBasedStructuralElement
    // CPACSWeb
    // CPACSWingRibCell
    // CPACSWingRibCrossSection
    // CPACSWingSkin

    // generated from /xsd:schema/xsd:complexType[655]
    class CPACSMaterialDefinition
    {
    public:
        TIGL_EXPORT CPACSMaterialDefinition();
        TIGL_EXPORT virtual ~CPACSMaterialDefinition();

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT bool ValidateChoices() const;

        TIGL_EXPORT virtual const boost::optional<std::string>& GetCompositeUID_choice1() const;
        TIGL_EXPORT virtual void SetCompositeUID_choice1(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetOrthotropyDirection_choice1() const;
        TIGL_EXPORT virtual void SetOrthotropyDirection_choice1(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetThicknessScaling_choice1() const;
        TIGL_EXPORT virtual void SetThicknessScaling_choice1(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetMaterialUID_choice2() const;
        TIGL_EXPORT virtual void SetMaterialUID_choice2(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetThickness_choice2() const;
        TIGL_EXPORT virtual void SetThickness_choice2(const boost::optional<double>& value);

    protected:
        boost::optional<std::string> m_compositeUID_choice1;
        boost::optional<double>      m_orthotropyDirection_choice1;
        boost::optional<double>      m_thicknessScaling_choice1;
        boost::optional<std::string> m_materialUID_choice2;
        boost::optional<double>      m_thickness_choice2;

    private:
#ifdef HAVE_CPP11
        CPACSMaterialDefinition(const CPACSMaterialDefinition&) = delete;
        CPACSMaterialDefinition& operator=(const CPACSMaterialDefinition&) = delete;

        CPACSMaterialDefinition(CPACSMaterialDefinition&&) = delete;
        CPACSMaterialDefinition& operator=(CPACSMaterialDefinition&&) = delete;
#else
        CPACSMaterialDefinition(const CPACSMaterialDefinition&);
        CPACSMaterialDefinition& operator=(const CPACSMaterialDefinition&);
#endif
    };
} // namespace generated

// CPACSMaterialDefinition is customized, use type CCPACSMaterialDefinition directly
} // namespace tigl
