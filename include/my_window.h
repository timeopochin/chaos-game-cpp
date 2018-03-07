#ifndef MY_WINDOW_H_INCLUDED
#define MY_WINDOW_H_INCLUDED

#include <QApplication>
#include <QWidget>
#include <QPoint>

class MyWindow : public QWidget
{
    Q_OBJECT

    public:
        MyWindow();

    public slots:
        //SLOTS

    private:
        int currentPoint;
        QPoint *m_point1;
        QPoint *m_point2;
        QPoint *m_point3;
        QPainter *m_painter;
        QPen *m_pen;
};

#endif
