#ifndef TEXTUREMAPPINGWINDOW_H
#define TEXTUREMAPPINGWINDOW_H

#include "openglwindow.h"
#include <QOpenGLShaderProgram>
#include <QTimer>

class TextureMappingWindow : public OpenGLWindow
{
    Q_OBJECT
public:
    explicit TextureMappingWindow(QWidget *parent = 0);
    ~TextureMappingWindow();
protected:
    void initializeGL();
    void paintGL();

private:
    void loadGLTexture();
    void loadShader();
    void render();
    void initGeometry();

private slots:
    void sltUpdateRatiaon();
private:
    QOpenGLShaderProgram *m_program;
    GLuint m_posAttr;
    GLuint m_texCoordAttr;
    GLuint m_vboIds[2];
    GLuint m_texture;
    GLfloat m_xrot;
    GLfloat m_yrot;
    GLfloat m_zrot;

    QTimer m_timer;
};

#endif // TEXTUREMAPPINGWINDOW_H
