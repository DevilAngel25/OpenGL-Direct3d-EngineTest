#pragma once

#include "VertexArray.h"
#include "IndexBuffer.h"
#include "Shader.h"
#include "imgui/imgui.h"

class Renderer
{
public:
	void Clear(ImVec4& color) const;
	void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const;
};
