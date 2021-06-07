#include <stdio.h>

int SquareByValue(int num) {
	return num * num;
}

void SquareByReference(int * ptr) {
	*ptr *= *ptr;
}

int main() 
{
	int num = 10;
	printf("SquareByValue: %d\n", SquareByValue(num));
	
	SquareByReference(&num);
	printf("SquareByReference: %d\n", num);
		
	return 0;
}
