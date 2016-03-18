/*
 * Copyright (C) 2012-2016 Open Source Robotics Foundation
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
 *
*/
#include <memory>
#include "gazebo/util/system.hh"

/// \file
/// \ingroup gazebo_physics
/// \ingroup gazebo_physics_simbody
/// \brief Simbody wrapper forward declarations and typedefs
namespace gazebo
{
  namespace physics
  {
    class SimbodyCollision;
    class SimbodyJoint;
    class SimbodyLink;
    class SimbodyModel;
    class SimbodyPhysics;
    class SimbodyRayShape;

    /// \def SimbodyPhysicsPtr
    /// \brief Shared pointer to SimbodyPhysics
    typedef std::shared_ptr<SimbodyPhysics> SimbodyPhysicsPtr;

    /// \def SimbodyCollisionPtr
    /// \brief Shared pointer to SimbodyCollision
    typedef std::shared_ptr<SimbodyCollision> SimbodyCollisionPtr;

    /// \def SimbodyLinkPtr
    /// \brief Shared pointer to SimbodyLink
    typedef std::shared_ptr<SimbodyLink> SimbodyLinkPtr;

    /// \def SimbodyModelPtr
    /// \brief Shared pointer to SimbodyModel
    typedef std::shared_ptr<SimbodyModel> SimbodyModelPtr;

    /// \def SimbodyRayShapePtr
    /// \brief Shared pointer to SimbodyRayShape
    typedef std::shared_ptr<SimbodyRayShape> SimbodyRayShapePtr;

    /// \def SimbodyJointPtr
    /// \brief Shared pointer to SimbodyJoint
    typedef std::shared_ptr<gazebo::physics::SimbodyJoint> SimbodyJointPtr;
  }
}
