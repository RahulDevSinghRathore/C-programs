#include<stdio.h>

int checkOddEven(int x){
	return (x&1);
}

int main(){
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	checkOddEven(x) ? printf("Odd") : printf("Even");
	return 0;
}
