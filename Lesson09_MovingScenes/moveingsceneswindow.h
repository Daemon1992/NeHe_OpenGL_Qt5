#ifndef MOVEINGSCENESWINDOW_H
#define MOVEINGSCENESWINDOW_H

#include <QOpenGLShaderProgram>
#include <QDebug>
#include "openglwindow.h"

class MoveingScenesWindow : public OpenGLWindow
{
    Q_OBJECT
public:
    typedef struct
    {
        float r, g, b;
        GLfloat dist;
        GLfloat angle;
    }stars;

    explicit MoveingScenesWindow(QWidget  *parent = 0);
    ~MoveingScenesWindow();
protected:
    void initializeGL();
    void paintGL();
    void keyPressEvent(QKeyEvent *event);
private:
    void loadGLTexture();
    void loadShader();
    void render();
    void initGeometry();
private:
    QOpenGLShaderProgram *m_program;
    GLuint m_texture;
    GLuint m_posAttr;
    GLuint m_texCoordAttr;

    QVector<stars> m_stars;
    bool m_twinkle;
    GLfloat	m_zoom;
    GLfloat m_tilt;
    GLfloat	m_spin;
};

#endif // MOVEINGSCENESWINDOW_H
