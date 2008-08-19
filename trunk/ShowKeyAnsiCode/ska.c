#include <stdio.h>

int main()
{
	char keyCode=0;
	printf("Show key ansi code utility.Press ctrl+q to quit.\n");
	while(1)
	{
		keyCode=getche();
		printf("\tHex=%x\tDec=%d\n",keyCode,keyCode);
		if(0x11==keyCode)
		{
			return 0;
		}
	}
}