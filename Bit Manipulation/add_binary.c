#include<stdio.h>
#include<string.h>

void addBinary(char a[], char b[]){
	int i = strlen(a) - 1;
	int j = strlen(b) - 1;
	char result[100];
	int k = 0;
	int carry = 0;
	int x;
	
	while(i>=0 || j>=0 || carry){
		int sum = carry;
		if (i>=0) sum += a[i--] - '0';
		if (j>=0) sum += b[j--] - '0';
		
		result[k++] = (sum % 2) + '0';
		carry = sum / 2;
	}
	
	printf("Result: ");
	for(x = k - 1; x >= 0; x--){
		printf("%c",result[x]);
	}
}

int main(){
	char a[100], b[100];
	printf("Enter first binary number: ");
	scanf("%s",&a);
	printf("Enter seconf binary number: ");
	scanf("%s",&b);
	addBinary(a,b);
	return 0;
}
