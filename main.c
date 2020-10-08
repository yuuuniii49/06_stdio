#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int square(int n);

int main(int argc, char *argv[]) {
	int n=5;
	int res;
	
	res=square(n);
	printf("%d",res);	
	
	return 0;
}

int square(int n){
	return(n*n);
}
