#ifndef WINWARE_H
#define WINWARE_H

#include <QtWidgets/QMainWindow>
#include <QPlainTextEdit>
#include <QScrollBar>
#include <QString>
#include <QTimer>
#include "camerathread.h"
#include "ui_winware.h"
#include "mydialog.h"

class winware : public QMainWindow
{
	Q_OBJECT

public:
	winware(QWidget *parent = 0);
	~winware();

private slots:
	void displayCameraNum();

	void on_pushButton_clicked();
	void on_OpenCamera_clicked();
	void on_CloseCamera_clicked();

private:
	Ui::winwareClass ui;
	QTimer UpdateTimer;
	myDialog *dialog_1;
	CameraThread camera_1;
};

#endif // WINWARE_H
