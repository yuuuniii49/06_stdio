#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int starprint()
{
	int i;
	for(i=0;i<10;i++)
		printf("*");
}
int main(int argc, char *argv[]) {
	
	starprint();
	starprint();
	starprint();
	
	return 0;
}
