// Copyright 2025 DeepMind Technologies Limited
//
// Licensed under the Apache License, Version 2.0 (the "License");
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

#ifndef MJCPHYSICS_GENERATED_MATERIALAPI_H
#define MJCPHYSICS_GENERATED_MATERIALAPI_H

/// \file mjcPhysics/materialAPI.h

#include <mujoco/experimental/usd/mjcPhysics/api.h>
#include <mujoco/experimental/usd/mjcPhysics/tokens.h>
#include <pxr/base/gf/matrix4d.h>
#include <pxr/base/gf/vec3d.h>
#include <pxr/base/gf/vec3f.h>
#include <pxr/base/tf/token.h>
#include <pxr/base/tf/type.h>
#include <pxr/base/vt/value.h>
#include <pxr/pxr.h>
#include <pxr/usd/usd/apiSchemaBase.h>
#include <pxr/usd/usd/prim.h>
#include <pxr/usd/usd/stage.h>

PXR_NAMESPACE_OPEN_SCOPE

class SdfAssetPath;

// -------------------------------------------------------------------------- //
// MJCMATERIALAPI                                                             //
// -------------------------------------------------------------------------- //

/// \class MjcPhysicsMaterialAPI
///
/// API providing extension attributes to represent physical MuJoCo materials.
///
class MjcPhysicsMaterialAPI : public UsdAPISchemaBase {
 public:
  /// Compile time constant representing what kind of schema this class is.
  ///
  /// \sa UsdSchemaKind
  static const UsdSchemaKind schemaKind = UsdSchemaKind::SingleApplyAPI;

  /// Construct a MjcPhysicsMaterialAPI on UsdPrim \p prim .
  /// Equivalent to MjcPhysicsMaterialAPI::Get(prim.GetStage(), prim.GetPath())
  /// for a \em valid \p prim, but will not immediately throw an error for
  /// an invalid \p prim
  explicit MjcPhysicsMaterialAPI(const UsdPrim &prim = UsdPrim())
      : UsdAPISchemaBase(prim) {}

  /// Construct a MjcPhysicsMaterialAPI on the prim held by \p schemaObj .
  /// Should be preferred over MjcPhysicsMaterialAPI(schemaObj.GetPrim()),
  /// as it preserves SchemaBase state.
  explicit MjcPhysicsMaterialAPI(const UsdSchemaBase &schemaObj)
      : UsdAPISchemaBase(schemaObj) {}

  /// Destructor.
  MJCPHYSICS_API
  virtual ~MjcPhysicsMaterialAPI();

  /// Return a vector of names of all pre-declared attributes for this schema
  /// class and all its ancestor classes.  Does not include attributes that
  /// may be authored by custom/extended methods of the schemas involved.
  MJCPHYSICS_API
  static const TfTokenVector &GetSchemaAttributeNames(
      bool includeInherited = true);

  /// Return a MjcPhysicsMaterialAPI holding the prim adhering to this
  /// schema at \p path on \p stage.  If no prim exists at \p path on
  /// \p stage, or if the prim at that path does not adhere to this schema,
  /// return an invalid schema object.  This is shorthand for the following:
  ///
  /// \code
  /// MjcPhysicsMaterialAPI(stage->GetPrimAtPath(path));
  /// \endcode
  ///
  MJCPHYSICS_API
  static MjcPhysicsMaterialAPI Get(const UsdStagePtr &stage,
                                   const SdfPath &path);

  /// Returns true if this <b>single-apply</b> API schema can be applied to
  /// the given \p prim. If this schema can not be a applied to the prim,
  /// this returns false and, if provided, populates \p whyNot with the
  /// reason it can not be applied.
  ///
  /// Note that if CanApply returns false, that does not necessarily imply
  /// that calling Apply will fail. Callers are expected to call CanApply
  /// before calling Apply if they want to ensure that it is valid to
  /// apply a schema.
  ///
  /// \sa UsdPrim::GetAppliedSchemas()
  /// \sa UsdPrim::HasAPI()
  /// \sa UsdPrim::CanApplyAPI()
  /// \sa UsdPrim::ApplyAPI()
  /// \sa UsdPrim::RemoveAPI()
  ///
  MJCPHYSICS_API
  static bool CanApply(const UsdPrim &prim, std::string *whyNot = nullptr);

  /// Applies this <b>single-apply</b> API schema to the given \p prim.
  /// This information is stored by adding "MjcMaterialAPI" to the
  /// token-valued, listOp metadata \em apiSchemas on the prim.
  ///
  /// \return A valid MjcPhysicsMaterialAPI object is returned upon success.
  /// An invalid (or empty) MjcPhysicsMaterialAPI object is returned upon
  /// failure. See \ref UsdPrim::ApplyAPI() for conditions
  /// resulting in failure.
  ///
  /// \sa UsdPrim::GetAppliedSchemas()
  /// \sa UsdPrim::HasAPI()
  /// \sa UsdPrim::CanApplyAPI()
  /// \sa UsdPrim::ApplyAPI()
  /// \sa UsdPrim::RemoveAPI()
  ///
  MJCPHYSICS_API
  static MjcPhysicsMaterialAPI Apply(const UsdPrim &prim);

 protected:
  /// Returns the kind of schema this class belongs to.
  ///
  /// \sa UsdSchemaKind
  MJCPHYSICS_API
  UsdSchemaKind _GetSchemaKind() const override;

 private:
  // needs to invoke _GetStaticTfType.
  friend class UsdSchemaRegistry;
  MJCPHYSICS_API
  static const TfType &_GetStaticTfType();

  static bool _IsTypedSchema();

  // override SchemaBase virtuals.
  MJCPHYSICS_API
  const TfType &_GetTfType() const override;

 public:
  // --------------------------------------------------------------------- //
  // TORSIONALFRICTION
  // --------------------------------------------------------------------- //
  /// Friction value acting around contact normal.
  ///
  /// | ||
  /// | -- | -- |
  /// | Declaration | `uniform double mjc:torsionalfriction = 0.005` |
  /// | C++ Type | double |
  /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Double |
  /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
  MJCPHYSICS_API
  UsdAttribute GetTorsionalFrictionAttr() const;

  /// See GetTorsionalFrictionAttr(), and also
  /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
  /// If specified, author \p defaultValue as the attribute's default,
  /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
  /// the default for \p writeSparsely is \c false.
  MJCPHYSICS_API
  UsdAttribute CreateTorsionalFrictionAttr(
      VtValue const &defaultValue = VtValue(),
      bool writeSparsely = false) const;

 public:
  // --------------------------------------------------------------------- //
  // ROLLINGFRICTION
  // --------------------------------------------------------------------- //
  /// Friction value acting around both axes on the contact tangent plane.
  ///
  /// | ||
  /// | -- | -- |
  /// | Declaration | `uniform double mjc:rollingfriction = 0.0001` |
  /// | C++ Type | double |
  /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Double |
  /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
  MJCPHYSICS_API
  UsdAttribute GetRollingFrictionAttr() const;

  /// See GetRollingFrictionAttr(), and also
  /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
  /// If specified, author \p defaultValue as the attribute's default,
  /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
  /// the default for \p writeSparsely is \c false.
  MJCPHYSICS_API
  UsdAttribute CreateRollingFrictionAttr(
      VtValue const &defaultValue = VtValue(),
      bool writeSparsely = false) const;

 public:
  // ===================================================================== //
  // Feel free to add custom code below this line, it will be preserved by
  // the code generator.
  //
  // Just remember to:
  //  - Close the class declaration with };
  //  - Close the namespace with PXR_NAMESPACE_CLOSE_SCOPE
  //  - Close the include guard with #endif
  // ===================================================================== //
  // --(BEGIN CUSTOM CODE)--
};

PXR_NAMESPACE_CLOSE_SCOPE

#endif
