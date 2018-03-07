#ifndef MY_WINDOW_H_INCLUDED
#define MY_WINDOW_H_INCLUDED

#include <QApplication>
#include <QWidget>
#include <QPoint>
#include <QPainter>
#include <QPen>
#include <QVector>

class MyWindow : public QWidget
{
    public:
        MyWindow();

    private:
        int m_currentPoint;
        QVector<QPoint*> m_points;
        QPainter *m_painter;
        QPen *m_pen;
        QPoint *m_currentPos;

        void drawChaosDot();
};

#endif
