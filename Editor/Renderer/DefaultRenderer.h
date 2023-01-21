#pragma once

#include <queue>

#include <Common/Types.h>

#include <Editor/Forward.h>

///////////////////////////////////////////////////////////
// Definition
///////////////////////////////////////////////////////////

namespace ark
{
  struct RenderTask
  {
    const Transform* Transform;
    const Mesh<DefaultVertex, U32>* Mesh;
  };

  class DefaultRenderer
  {
  public:

    DefaultRenderer();
    virtual ~DefaultRenderer();

  public:

    static void AddRenderTask(const RenderTask& RenderTask);

  public:

    void Render();

  private:

    Shader* mShader;

    std::queue<RenderTask> mRenderQueue = {};
  };
}