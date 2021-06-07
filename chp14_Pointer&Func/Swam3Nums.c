#include <stdio.h>

void Swap3(int *ptr1, int *ptr2, int *ptr3) {
	int num1 = *ptr1;
	int num2 = *ptr2;
	int num3 = *ptr3;
	int temp=0;
	temp = num1;
	num1 = num3;
	num3 = num2;
	num2 = temp;
	
	*ptr1 = num1;
	*ptr2 = num2;
	*ptr3 = num3;
	
}


int main() 
{
	int num1=100, num2=200, num3=300;
	
	Swap3(&num1, &num2, &num3);
	
	printf("num1: %d num2: %d num3: %d\n", num1, num2, num3);
		
	return 0;
}
