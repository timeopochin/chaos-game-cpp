#include "my_window.h"
#include <QMouseEvent>

MyWindow::MyWindow() : QWidget(), m_currentPoint(0)
{
    m_point1 = new QPoint();
    m_point2 = new QPoint();
    m_point3 = new QPoint();

    m_painter = new QPainter(this);
    m_pen = new QPen(Qt::black);

    m_pen->setWidth(1);
    m_painter->setPen(&m_pen);
}

MyWindow::mousePressEvent(QMouseEvent *cursor)
{
    switch (m_currentPoint)
    {
        case 0:
            m_point1->setX(cursor->x());
            m_point1->setY(cursor->y());
            break;
        case 1:
            m_point2->setX(cursor->x());
            m_point2->setY(cursor->y());
            break;
        case 2:
            m_point3->setX(cursor->x());
            m_point3->setY(cursor->y());
            break;
        case 3:
            while (true)
            {
                drawChaosDot();
            }
    }
    m_currentPoint++;
}
