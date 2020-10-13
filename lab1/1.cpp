#include<stdio.h>

struct complex
{
    int real, img;
};

int main()
{
    struct complex a, b, comp;

    printf("Enter a and b: ");
    scanf("%d%d", &a.real,&a.img);

    printf("Enter c and d: ");
    scanf("%d%d", &b.real,&b.img);

    comp.real = a.real + b.real;
    comp.img = b.img + a.img;

    printf("Sum of complex numbers: %d + i%d",comp.real, comp.img);
    return 1;
}
