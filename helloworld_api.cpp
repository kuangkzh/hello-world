#include <stdio.h>
#include "windows.h"

int main(void)
{

	char str[]="helloworld";
	unsigned long *p=0;
	HANDLE h=GetStdHandle(-11);
	WriteConsole(h,str,sizeof(str),p,0);
}
