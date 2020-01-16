#ifndef OPENGLWINDOW_H
#define OPENGLWINDOW_H

#include <QResizeEvent>
#include <QKeyEvent>
#include <QMatrix4x4>

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>


class OpenGLWindow : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
public:
    explicit OpenGLWindow(QWidget *parent = 0);
    ~OpenGLWindow();

protected:
    void keyPressEvent(QKeyEvent * event);

    virtual void initializeGL();

    virtual void resizeGL(int w, int h);

    virtual void paintGL();

    QMatrix4x4 m_projection;

    QMatrix4x4 m_modelView;
private:
    bool m_show_full_screen;
};

#endif // OPENGLWINDOW_H
