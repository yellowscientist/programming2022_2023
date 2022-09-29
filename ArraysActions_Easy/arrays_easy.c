#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

	srand(time(0));

	int sizeOfArr;

	printf("enter size of array: ");
	scanf_s("%d", &sizeOfArr);

	int arr[100];

	for (int i = 0; i < sizeOfArr; i++)
	{
		arr[i] = -10 + rand() % 21;
		printf("%d ", arr[i]);
	}

	printf("\n");
	system("pause");
	return 0;

}