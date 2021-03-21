#include <stdio.h>

#define N 80

int main()
{
	FILE* file;
	char arr[N];
	int i;
	file = fopen("file.txt", "r");
	while ((arr[i] = fgetc(file)) != EOF) {
		if (arr[i] == '\n') {
			arr[i] = '\0';
			printf("%s\n", arr);
			i= 0;
		}
		else i++;
	}
	arr[i] = '\0';
	printf("%s\n", arr);

	return 0;
}