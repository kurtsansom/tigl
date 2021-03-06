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

#pragma once

#include <string>
#include <tixi.h>
#include <vector>
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
class CTiglUIDObject;

namespace generated
{
    class CPACSUpdate;
    class CPACSHeader;

    // This class is used in:
    // CPACSHeader

    /// @brief updatesType
    /// 
    /// Updates type, containing update data for the CPACS
    /// dataset
    /// 
    class CPACSUpdates
    {
    public:
        TIGL_EXPORT CPACSUpdates(CPACSHeader* parent);

        TIGL_EXPORT virtual ~CPACSUpdates();

        TIGL_EXPORT CPACSHeader* GetParent();

        TIGL_EXPORT const CPACSHeader* GetParent() const;

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::vector<std::unique_ptr<CPACSUpdate>>& GetUpdates() const;
        TIGL_EXPORT virtual std::vector<std::unique_ptr<CPACSUpdate>>& GetUpdates();

        TIGL_EXPORT virtual CPACSUpdate& AddUpdate();
        TIGL_EXPORT virtual void RemoveUpdate(CPACSUpdate& ref);

    protected:
        CPACSHeader* m_parent;

        std::vector<std::unique_ptr<CPACSUpdate>> m_updates;

    private:
        CPACSUpdates(const CPACSUpdates&) = delete;
        CPACSUpdates& operator=(const CPACSUpdates&) = delete;

        CPACSUpdates(CPACSUpdates&&) = delete;
        CPACSUpdates& operator=(CPACSUpdates&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSUpdates = generated::CPACSUpdates;
using CCPACSUpdate = generated::CPACSUpdate;
using CCPACSHeader = generated::CPACSHeader;
} // namespace tigl
