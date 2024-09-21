#include <iostream>
#include <QtOpenGL/QtOpenGL>
#include <QtOpenGLWidgets/QtOpenGLWidgets>
using namespace std;

class Scene : public QOpenGLWidget, protected QOpenGLFunctions {

protected:
    void initializeGL() override {
        initializeOpenGLFunctions();
    }
    void paintGL() override {

        glBegin(GL_TRIANGLES);

        glColor3f(1, 0, 0); glVertex3f(   0, 0.5, 0);
        glColor3f(0, 1, 0); glVertex3f(-0.5,-0.5, 0);
        glColor3f(0, 0, 1); glVertex3f( 0.5,-0.5, 0);

        glEnd();

        glFlush();

    }
    void resizeGL(int, int) override {

    }
};

int main(int argv, char **args) {

    QApplication app(argv, args);

    Scene scene;
    scene.setWindowTitle("Hello CMake Qt OpenGL!");
    scene.move(300, 300);
    scene.resize(400, 400);
    scene.show();

    return app.exec();
}
