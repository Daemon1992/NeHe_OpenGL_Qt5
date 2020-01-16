#ifndef POLYGONWINDOW_H
#define POLYGONWINDOW_H

#include <QOpenGLShaderProgram>
#include <QTimer>
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
    void render();
private:
    void initGeometry();

private slots:
    void sltUpdate();

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
