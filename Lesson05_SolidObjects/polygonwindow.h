#ifndef POLYGONWINDOW_H
#define POLYGONWINDOW_H

#include <QOpenGLShaderProgram>
#include "openglwindow.h"

#include <QTimer>

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

private slots:
    void sltUpdateTransform();
private:
    QOpenGLShaderProgram *m_program;
    GLuint m_colAttr;
    GLuint m_posAttr;
    GLuint m_vboIds[4];

    GLfloat	m_rtri;
    GLfloat	m_rquad;

    QTimer m_timer;
};

#endif // POLYGONWINDOW_H
