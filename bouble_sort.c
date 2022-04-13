#include <stdio.h>
#include <stdlib.h>


void mass(int *i, int o){

	int temp = 0;
	int n = 1;

	while(n != o){
		for (int j = 1; j != o; j++){
			if (i[j] > i[j+1]){
				temp = i[j];
				i[j] = i[j+1];
				i[j+1] = temp;
			}
		}
		n++;
	}

	printf("\nSorted\n");
	printf("\nKakashka\n");
	printf("\n Ne Kakashka\n");

	for (int j = 1; j != o; j++)
		printf("%d ", i[j]);
	}

int main(int argc, char *argv[]){

	int a[argc];
	printf("Unity count %d\n", argc);
	printf("\nList mass\n");

	for (int i = 1; i < argc; i++){
		a[i] = atoi(argv[i]);
		printf("%d ", a[i]);
	}
	printf("\n");

	mass(a, argc);

	printf("\n");
}