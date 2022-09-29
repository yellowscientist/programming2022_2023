#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {

	srand(time(0));

	int sizeOfArr;

	printf("enter size of array (max - 100): ");
	scanf_s("%d", &sizeOfArr);

	int arr[100];

	for (int i = 0; i < sizeOfArr; i++)
	{
		arr[i] = -10 + rand() % 21;
		printf("%d ", arr[i]);
	}
	printf("\n");

	int userNum, userDegr;

	printf("enter any num and num from 2 to 5: ");
	scanf_s("%d %d", &userNum, &userDegr);

	for (int i = 0; i < sizeOfArr; i++)
	{
		if (arr[i] % userNum == 0) {
			arr[i] = pow(arr[i], userDegr);
		}
	}

	int arrClone[100];

	for (int i = sizeOfArr; i >= 0 ; i--)
	{
		arrClone[sizeOfArr - i - 1] = arr[i];
	}

	for (int i = 0; i < sizeOfArr; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < sizeOfArr; i++)
	{
		printf("%d ", arrClone[i]);
	}
	printf("\n");

	system("pause");
	return 0;

}