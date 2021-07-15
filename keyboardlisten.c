#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
	//Exercise1
	
	//·Ç×èÈûÊ½¼üÅÌ¼àÌı 
	char ch;
	int i = 1;
	
	while(1)
	{
		if(kbhit())
		{
			ch = getch();
			if(ch == 27)
			{
				break;
			}
		}
		printf("%d\n", i);
		i += 1;
		Sleep(1000);
	}
	
	
	
	return 0;
 } 
