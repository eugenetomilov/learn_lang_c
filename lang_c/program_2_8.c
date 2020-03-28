#include <stdio.h>

void one_three(void);
void two(void);

int main(void) {

    printf("начинаем!\n");
    one_three();
    printf("порядок!");

    return 0;

}

void two(void) {

    printf("два\n");

}

void one_three(void) {

    printf("один\n");
    two();
    printf("три\n");

}