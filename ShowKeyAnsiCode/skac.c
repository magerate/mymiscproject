#include <stdio.h>

int main()
{
	char keyCode=0;
	printf("Show key ansi code utility.Press alt+q to quit.\n");
	while(1)
	{
		keyCode=getche();
		if(keyCode!=0x71)
		{
			printf("\tHex=0X%X\tDec=%d\n",keyCode,keyCode);
		}
		else
		{
			return 0;
		}
	}
}