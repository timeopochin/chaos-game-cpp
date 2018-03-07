#include "my_window.h"

MyWindow::MyWindow() : QWidget(), currentPoint(0)
{
    m_point1 = new QPoint();
    m_point2 = new QPoint();
    m_point3 = new QPoint();

    m_painter = new QPainter(this);
    m_pen = new QPen(Qt::black);

    m_pen->setWidth(1);
    m_painter->setPen(&m_pen);
}
