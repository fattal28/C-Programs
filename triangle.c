#include <stdio.h>
#include <stdlib.h>

void triangle(int width, char x);

int main(void){
    triangle(5, 'E');
}

void triangle(int width, char x){
    if (width < 2){
        return;
    }
    int counter = 1;
    int direction = 1;
    do{
        int i;
        for(i = 0; i < width - counter; i++){
            printf(" ");
        }
        for (int i = 0; i < counter; i++){
            printf("%c", x);
        }
        printf("\n");
        counter += direction;
        if(counter > width){
            counter = width - 1;
            direction = -1;
        }
    }while (counter != 0);
    return;
}

h
