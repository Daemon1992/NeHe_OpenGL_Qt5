#ifndef POLYGONWINDOW_H
#define POLYGONWINDOW_H

#include <QOpenGLShaderProgram>
#include "openglwindow.h"

class PolygonWindow : public OpenGLWindow
{
    Q_OBJECT
public:
    explicit PolygonWindow(QWidget *parent = 0);
    ~PolygonWindow();
protected:
    void initializeGL();
    void paintGL();
private:
    void initGeometry();
    void render();
private:
    QOpenGLShaderProgram *m_program;
    GLuint m_posAttr;

    GLuint m_vboIds[2];
};

#endif // POLYGONWINDOW_H
