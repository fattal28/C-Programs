#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

char *copy(char *array);

int main(void){
	char array[100];
	char *arraycopy;
	printf("Enter your string: \n");
	scanf("%s", array);
	printf("Pointer to array holding a copy of the string is: %p\n", &arraycopy);
}

char *copy(char *array){
	int i, counter = 0;
	for(i = 0; i < strlen(array); i++){
		counter++;
	}
	char *arraycopy = (char*) malloc (sizeof(char)*counter);
	int j;
	for(j = 0; j < strlen(arraycopy); j++){
		arraycopy[counter] = array[counter];
		counter++;
	}
	return arraycopy;
}

h
