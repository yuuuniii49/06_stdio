#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r);
int factorial(int x);
int get_integer();

int main(int argc, char *argv[]) {

	//변수 선언 
	int n ,r,res;
	
	//n,r 입력
	n=get_integer();
	r=get_integer();
	
	//combination
	res=combination(n,r);
	//print
	printf("combination result is %i",res);
	
		return 0;
	}

int get_integer(){
	int a;
	
	printf("input an integer");
	scanf("%i",&a); 
	
	return a;
}

int factorial(int x){
	int i, res=1;
	for(i=1;i<=x;i++);
		res*=i;
	return res;
}

int combination(int n, int r){
	int n1,n2,n3;
	
	n1 = factorial(n);
	n2 = factorial(n-r);
	n3 = factorial(r);
	
	return (n1/n2*n3);
}
