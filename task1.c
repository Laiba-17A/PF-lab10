#include<stdio.h>
int fun(int n){
	if(n==0){
		return;
	}
	printf("%d\n",n);
	fun(n-1);
}

int f1(int n){
	if(n==10){
		return;
	}
	if(n%2==0){
		printf("%d\n",n+1);
	}
	else{
		printf("%d\n",n-1);
	}
	f2(n);
	
}

void f2(int n){
	f1(n+1);
}

int factorial(int n){
	if(n==1){
		return 1;
	}
	return n*factorial(n-1);
}
int main(){
	fun(5);
	f1(1);
	int n;
	printf("enter any number");
	scanf("%d",&n);
	printf("fatorial of %d: %d",n,factorial(n));
	return 0;
}
