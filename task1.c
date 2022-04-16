#include<stdio.h>

int main() {
    // Variables
    double d = 1.11;
    int i = 5;
    char ch = 'c';
    // Pointers
    double* p_d = &d;
    int* p_i = &i;
    char* p_ch = &ch;
    

    printf("Values: \n");
    printf("d: %lf\n", d);
    printf("i: %d\n", i);
    printf("ch: %c\n", ch);
    printf("p_d: %d\n", p_d);
    printf("p_i: %d\n", p_i);
    printf("p_ch: %d\n", p_ch);


    printf("\nAdresses: \n");
    printf("d: %d\n", &d);
    printf("i: %d\n", &i);
    printf("ch: %d\n", &ch);
    printf("p_d: %d\n", &p_d);
    printf("p_i: %d\n", &p_i);
    printf("p_ch: %d\n", &p_ch);


    printf("\nMemory Size: \n");
    printf("d: %d\n", sizeof(d));
    printf("i: %d\n", sizeof(i));
    printf("ch: %d\n", sizeof(ch));
    printf("p_d: %d\n", sizeof(p_d));
    printf("p_i: %d\n", sizeof(p_i));
    printf("p_ch: %d\n", sizeof(p_ch));

    return 0;
}