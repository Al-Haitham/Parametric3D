#include <QApplication>

#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.resize(1280,720);
    window.setWindowTitle("Parametric 3D");

    window.show();

    return app.exec();
}
