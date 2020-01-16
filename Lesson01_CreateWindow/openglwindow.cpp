#include "openglwindow.h"

OpenGLWindow::OpenGLWindow(QWidget *parent) :
    QOpenGLWidget(parent),
    m_show_full_screen(false)
{

}

OpenGLWindow::~OpenGLWindow()
{

}

void OpenGLWindow::initialize()
{
    initializeOpenGLFunctions();
}

void OpenGLWindow::resizeGL(int w, int h)
{
    if(h == 0)
    {
        h = 1;
    }

    glViewport(0, 0, w, h);

    m_projection.setToIdentity();
    m_projection.perspective(45, (float)w/float(h), 1, 1000);
    m_modelView.setToIdentity();
}


void OpenGLWindow::paintGL()
{

}

void OpenGLWindow::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
}

void OpenGLWindow::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
        case Qt::Key_F1:
        {
            m_show_full_screen = !m_show_full_screen;
            if(m_show_full_screen)
            {
                showFullScreen();
            }
            else
            {
                showNormal();
            }
            break;
        }
        case Qt::Key_Escape:
        {
            close();
            break;
        }
    }
    QWidget::keyPressEvent(event);
}
