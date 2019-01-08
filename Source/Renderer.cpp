#include "Renderer.h"

void Renderer::Clear(ImVec4 & color) const
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(color.x, color.y, color.z, color.w);
}

void Renderer::Draw(const VertexArray & va, const IndexBuffer & ib, const Shader & shader) const
{
	shader.Bind();
	va.Bind();
	ib.Bind();

	GLCall(glDrawElements(GL_TRIANGLES, ib.GetCount(), GL_UNSIGNED_INT, nullptr));
}
