#include "my_window.h"
#include <QMouseEvent>
#include <cstdlib>
#include <time>

MyWindow::MyWindow() : QWidget(), m_currentPoint(0)
{
    std::srand(time(0));

    for (int i(0); i < 3; i++)
    {
        m_points.push_back(new QPoint());
    }

    m_painter = new QPainter(this);
    m_pen = new QPen();
    m_currentPos = new QPoint();

    m_painter->setPen(&m_pen);
}

MyWindow::mousePressEvent(QMouseEvent *cursor)
{
    if (m_currentPoint < 3)
    {
        m_points[m_currentPoint]->setX(cursor->x());
        m_points[m_currentPoint]->setY(cursor->y());
        m_currentPoint++;
    }
    else
    {
        drawChaosDot();
    }
}

MyWindow::drawChaosDot()
{
    int dotIndex(std::rand() % 3);
    QPoint pointToDraw;
    pointToDraw.setX((m_currentPos->x()*2 + m_points[dotIndex]->x())/3);
    pointToDraw.setY((m_currentPos->y()*2 + m_points[dotIndex]->y())/3)

    m_painter->drawPoint(pointToDraw);
}
