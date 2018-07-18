#include "winware.h"

winware::winware(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(&UpdateTimer, &QTimer::timeout, this, &winware::displayCameraNum);
}

winware::~winware()
{
	
}

void winware::displayCameraNum()
{
	ui.CameraTextEdit->insertPlainText("num: " + tr("%1").arg(camera_1.getCameraThreadInfo()) + "\n");
	ui.CameraTextEdit->verticalScrollBar()->setValue(ui.CameraTextEdit->verticalScrollBar()->maximum());
}

void winware::on_pushButton_clicked()
{
	dialog_1 = new myDialog(this);
	dialog_1->setModal(false);
	dialog_1->show();
}

void winware::on_OpenCamera_clicked()
{
	UpdateTimer.start(10);
	camera_1.beginCT();
}

void winware::on_CloseCamera_clicked()
{
	UpdateTimer.stop();
	camera_1.stopCT();
}
