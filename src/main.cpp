#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.resize(1280,720);
    window.setWindowTitle("Parametric 3D");

    QLabel label("Qt is Working");
    QPushButton button("Click me")

    window.show();

    return app.exec();
}
