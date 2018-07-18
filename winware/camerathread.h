#pragma once
#include <QThread>
#include <QMutex>
class CameraThread : public QThread
{
public:
	CameraThread();
	~CameraThread();
	int getCameraThreadInfo();
	void beginCT();
	void stopCT();

protected:
	void run();

private:
	bool isRun;
	int num;
	QMutex mutex;
	
};