#include<stdio.h>
#include<locale.h>
//#include<malloc.h>

int main() {

	setlocale(LC_ALL, "rus");

	char* str;
	str = (char*)malloc(sizeof(char*) * 100);
	int userInput = 1;
	printf("input string \n");
	gets(str);

	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	str[len + 1] = "\0";
	puts(str);
	system("pause");


	while (1)
	{
		system("cls");
		printf("1)заменить строку \n2)обрезать строку \n3)развернуть строку \n4)сменить регистр\n0)выход\n");
		scanf_s("%d", &userInput);

    	if (userInput == 0) {
			break;
		}
		else if (userInput == 1) {
			system("cls");
			printf("введите новую строку\n");
			getchar();
			gets(str);
			int len = 0;
			int flag = 0;
			while (str[len] != '\0') {
				len++;
			}
			while(len>100){
				printf("введите новую строку еще раз");
				gets(str);
				while (str[len] != '\0') {
					len++;
				}
			}
			printf("новая строка: ");
			puts(str);
			system("pause");
		}
		else if (userInput == 2) {
			system("cls");
			printf("введите последний индекс\n");
			int lastIndex;
			scanf_s("%d", &lastIndex);
			str[lastIndex] = '\0';
			puts(str);
			system("pause");
		}
		else if (userInput == 3) {
			system("cls");
			int len = 0;
			while (str[len] != '\0') {
				len++;
			}

			char* cloneStr;
			cloneStr = (char*)malloc(sizeof(char*) * 100);
			cloneStr[len] = '\0';
			for (int i = len; i > 0; i--) {
				cloneStr[len - i] = str[i-1];
			}
			printf("исходная строка: ");
			puts(str);
			printf("перевернутая строка:");
			puts(cloneStr);
			system("pause");
		}

	}

	
	free(str);
	system("pause");
	return 0;
}