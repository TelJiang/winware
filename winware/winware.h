#ifndef WINWARE_H
#define WINWARE_H

#include <QtWidgets/QMainWindow>
#include "ui_winware.h"

class winware : public QMainWindow
{
	Q_OBJECT

public:
	winware(QWidget *parent = 0);
	~winware();

private:
	Ui::winwareClass ui;
};

#endif // WINWARE_H
