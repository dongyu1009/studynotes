#include "mainwindow.h"
#include <QApplication>

#include <qgsapplication.h>
#include <qgsproviderregistry.h>
#include <qgsvectorlayer.h>
#include <qgsmapcanvas.h>

int main(int argc, char *argv[])
{
    /*
     *
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    */
    QgsApplication app(argc, argv, true);
    app.setPrefixPath("C:/");
    int retval = app.exec();
    app.exitQgis();
    return retval;

}
