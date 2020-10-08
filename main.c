#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {

	
	printf("get_max : %i\n",get_max(10,20));	
	
	return 0;
}

int get_max(int x, int y){
	
	if(x > y)
		return x;
	else
		return y;
}
