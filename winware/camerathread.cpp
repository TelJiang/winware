#include "camerathread.h"

CameraThread::CameraThread()
{
	isRun = false;
	num = 0;
}

CameraThread::~CameraThread()
{
	if (isRunning()) 
	{
		isRun = false;
		wait(100);
	}
}

int CameraThread::getCameraThreadInfo()
{
	int a = 0;
	if (mutex.tryLock())
	{
		a = num;
		mutex.unlock();
	}
	return a;
}

void CameraThread::beginCT()
{
	isRun = true;
	start();
}

void CameraThread::stopCT()
{
	isRun = false;
}

void CameraThread::run()
{
	while (isRun)
	{
		for (int i = 0; i < 10000; i++)
		{
			for (int j = 0; j < 1000; j++)
			{
				;
			}
		}

		//开始改变传递数据
		mutex.lock();
		num++;
		mutex.unlock();
	}
}
