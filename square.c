#include <stdio.h>
#include <stdlib.h>

void filledSquare(int width , char border , char fill);

int main(void)
{
	filledSquare(4, '+', '*');
}

void filledSquare(int width , char border , char fill){
if (width < 2){
	return;
}
int i;
for (i = 0; i < width; i++){
	printf("%c", border);
}
printf("\n");
for (i = 1; i < width - 1; i++){
	printf("%c", border);
int j;
for (j = 1; j < width - 1; j++){
	printf("%c", fill);
}
printf("%c\n", border);
}
for (i = 0; i < width; i++){
	printf("%c", border);
}
printf("\n");
return;
}

hel
