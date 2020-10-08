#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a,int b);

int main(int argc, char *argv[]) {
	int a=10,b=20;
	int res;
	
	res=sumTwo(a,b);
	printf("%d",res);	
	
	return 0;
}

int sumTwo(int a, int b){
	return(a+b);
}
