#include <QApplication>

#include <gui/windowfilter.h>
#include <filters/filtertonemapping.h>

 int main(int argc, char *argv[])
 {
     QApplication app(argc, argv);
     
     FilterTonemapping filter;
     WindowFilter window(filter);
     window.show();

     return app.exec();
 }
