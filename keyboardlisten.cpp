#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
	//Exercise1
	
	//������ʽ���̼��� 
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
