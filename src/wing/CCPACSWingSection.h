/* 
* Copyright (C) 2007-2013 German Aerospace Center (DLR/SC)
*
* Created: 2010-08-13 Markus Litz <Markus.Litz@dlr.de>
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
/**
* @file
* @brief  Implementation of CPACS wing section handling routines.
*/

#ifndef CCPACSWINGSECTION_H
#define CCPACSWINGSECTION_H

#include "generated/CPACSWingSection.h"
#include "tigl_internal.h"
#include "tixi.h"
#include "CCPACSWingSectionElements.h"
#include "CCPACSTransformation.h"
#include <string>

namespace tigl
{

class CCPACSWingSection : public generated::CPACSWingSection
{
public:
    TIGL_EXPORT CCPACSWingSection(CCPACSWingSections* parent, CTiglUIDManager* uidMgr);

    // Get element count for this section
    TIGL_EXPORT int GetSectionElementCount() const;

    // Get element for a given index
    TIGL_EXPORT CCPACSWingSectionElement& GetSectionElement(int index);
    TIGL_EXPORT const CCPACSWingSectionElement& GetSectionElement(int index) const;

    // Gets the section transformation
    TIGL_EXPORT CTiglTransformation GetSectionTransformation() const;

    // Gets the section translation
    TIGL_EXPORT CTiglPoint GetTranslation() const;

    // Gets the section rotation
    TIGL_EXPORT CTiglPoint GetRotation() const;

    // Gets the section scaling
    TIGL_EXPORT CTiglPoint GetScaling() const;

    // Setter for translation
    TIGL_EXPORT void SetTranslation(const CTiglPoint& trans);

    // Setter for rotation
    TIGL_EXPORT void SetRotation(const CTiglPoint& rot);

    // Setter for scaling
    TIGL_EXPORT void SetScaling(const CTiglPoint& scaling);

private:
    void InvalidateImpl(const boost::optional<std::string>& source) const override;

};

} // end namespace tigl

#endif // CCPACSWINGSECTION_H
