#include "my_window.h"
#include <QApplication>
 
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyWindow window;
    window.show();

    return app.exec();
}
