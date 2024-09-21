add_executable(cad-opengl cad-opengl.cpp)

target_link_libraries(cad-opengl
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::OpenGL
        Qt::OpenGLWidgets
        OpenGL::GL
        OpenGL::GLU
        # opengl32.lib
        # glu32.lib
)