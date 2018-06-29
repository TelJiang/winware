#include "winware.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	winware w;
	w.show();
	return a.exec();
}
