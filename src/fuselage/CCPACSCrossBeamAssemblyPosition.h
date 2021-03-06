/*
* Copyright (c) 2018 Airbus Defence and Space and RISC Software GmbH
*
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

#pragma once

#include <TopoDS_Shape.hxx>

#include "ITiglGeometricComponent.h"
#include "generated/CPACSCrossBeamAssemblyPosition.h"
#include "Cache.h"

namespace tigl
{
class CCPACSCrossBeamAssemblyPosition : public generated::CPACSCrossBeamAssemblyPosition, public ITiglGeometricComponent
{
public:
    TIGL_EXPORT CCPACSCrossBeamAssemblyPosition(CCPACSCargoCrossBeamsAssembly* parent, CTiglUIDManager* uidMgr);

    TIGL_EXPORT std::string GetDefaultedUID() const override;
    TIGL_EXPORT PNamedShape GetLoft() const override;
    TIGL_EXPORT TiglGeometricComponentType GetComponentType() const override;
    TIGL_EXPORT TiglGeometricComponentIntent GetComponentIntent() const override;

    TIGL_EXPORT void SetFrameUID(const std::string& value) override;
    TIGL_EXPORT void SetPositionZ(const double& value) override;

    TIGL_EXPORT TopoDS_Shape GetGeometry(bool just1DElements, TiglCoordinateSystem cs = GLOBAL_COORDINATE_SYSTEM) const;
    TIGL_EXPORT TopoDS_Shape GetCutGeometry(TiglCoordinateSystem cs = GLOBAL_COORDINATE_SYSTEM) const;

private:
    void InvalidateImpl(const boost::optional<std::string>& source) const override;

    void BuildCutGeometry(TopoDS_Shape& cache) const;
    void BuildGeometry1D(TopoDS_Shape& cache) const;
    void BuildGeometry3D(TopoDS_Shape& cache) const;
    void BuildGeometry(TopoDS_Shape& cache, bool just1DElements) const;
private:
    Cache<TopoDS_Shape, CCPACSCrossBeamAssemblyPosition> m_geometry1D;
    Cache<TopoDS_Shape, CCPACSCrossBeamAssemblyPosition> m_geometry3D;
    Cache<TopoDS_Shape, CCPACSCrossBeamAssemblyPosition> m_cutGeometry;
};

} // namespace tigl
