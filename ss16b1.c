#include<stdio.h>

int main(){
	
	int number = 7;
	int *numberprt;
	numberprt = &number;
	printf("Gia tri cua bien x la %d\n", number );
	printf("Gia tri cua bien x la %d\n", *numberprt);
	
	return 0;
}
