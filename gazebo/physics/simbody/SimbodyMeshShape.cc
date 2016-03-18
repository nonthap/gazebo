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
#include "gazebo/common/Mesh.hh"
#include "gazebo/physics/MeshShapePrivate.hh"

#include "gazebo/physics/simbody/SimbodyTypes.hh"
#include "gazebo/physics/simbody/SimbodyMesh.hh"
#include "gazebo/physics/simbody/SimbodyCollision.hh"
#include "gazebo/physics/simbody/SimbodyPhysics.hh"
#include "gazebo/physics/simbody/SimbodyMeshShape.hh"

using namespace gazebo;
using namespace physics;

//////////////////////////////////////////////////
SimbodyMeshShape::SimbodyMeshShape(CollisionPtr _parent)
: MeshShape(_parent)
{
  this->simbodyMesh = new SimbodyMesh();
}

//////////////////////////////////////////////////
SimbodyMeshShape::~SimbodyMeshShape()
{
  delete this->simbodyMesh;
}

//////////////////////////////////////////////////
void SimbodyMeshShape::Load(sdf::ElementPtr _sdf)
{
  MeshShape::Load(_sdf);
}

//////////////////////////////////////////////////
void SimbodyMeshShape::Init()
{
  MeshShape::Init();

  if (this->meshShapeDPtr->submesh)
  {
    this->simbodyMesh->Init(this->meshShapeDPtr->submesh,
        std::static_pointer_cast<SimbodyCollision>(
          this->meshShapeDPtr->collisionParent),
        this->meshShapeDPtr->sdf->Get<ignition::math::Vector3d>("scale"));
  }
  else
  {
    this->simbodyMesh->Init(this->meshShapeDPtr->mesh,
        std::static_pointer_cast<SimbodyCollision>(
          this->meshShapeDPtr->collisionParent),
        this->meshShapeDPtr->sdf->Get<ignition::math::Vector3d>("scale"));
  }
}
