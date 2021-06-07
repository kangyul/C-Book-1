#include <stdio.h>

void Swap(int *ptr1, int *ptr2) {
	int temp = 0;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main() 
{
	int num1 = 100;
	int num2 = 200;
	
	printf("%d %d\n", num1, num2);
	
	Swap(&num1, &num2);
	
	printf("%d %d\n", num1, num2);	
		
	return 0;
}
