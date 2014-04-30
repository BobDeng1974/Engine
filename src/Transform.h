#ifndef TRANSFORM_H
#define TRANSFORM_H

#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>

class Transform
{
public:
  Transform(const glm::vec3& position = glm::vec3(), const glm::quat& rotation = glm::quat(), const glm::vec3& scale = glm::vec3(1.0f));
  ~Transform(void);

  void setPosition(float x, float y, float z);
  void setRotation(float x, float y, float z, float w);

  glm::mat4 getTransformMatrix(void);

private:
  glm::vec3 position;
  glm::quat rotation;
  glm::vec3 scale;
};

#endif