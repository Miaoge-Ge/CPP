#include<iostream>
#include<windows.h>
using namespace std;
DWORD WINAPI ThreadProc(PVOID lp) {
	for (int i = 1; i <= 10; i++)
		cout << i << " ";
	return 0;
}
int main() {
	//Win API
	HANDLE h=CreateThread(NULL, 0, ThreadProc,0,0/*CREATE_SUSPENDED*/, 0);
	//创建线程，返回h为句柄，CREATE_SUSPENDED表示将线程挂起
	//SuspendThread(h);//将线程挂起
	//ResumeThread(h);//将线程恢复
	ResumeThread(h);//引用计数，挂起次数与恢复次数相同才能恢复
	for (int i = 11; i <= 20; i++)
		cout << i << " ";
	while (1);
	return 0;
}
