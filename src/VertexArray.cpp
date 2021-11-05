#include "VertexArray.hpp"

namespace gl::VertexArray
{
    GLuint create()
    {
        GLuint id;
        glGenVertexArrays(1, &id);
        return id;
    }
    void destroy(GLuint id) { glDeleteVertexArrays(1, &id); }
    void bind(GLuint id) { glBindVertexArray(id); }
    void enable(VertexAttrib index) { glEnableVertexAttribArray(index); }
    void disable(VertexAttrib index) { glDisableVertexAttribArray(index); }
    void pointer(VertexAttrib index, gl::DataType type, int attribSize, int vertexSize, const void* offset)
    {
        glVertexAttribPointer(index, attribSize, type, GL_FALSE, sizeOf(type) * vertexSize, offset);
    }
}
