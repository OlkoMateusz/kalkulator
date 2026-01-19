#include <stdio.h>

float dzielenie(float a, float b)
{
    return a/b;
}

int main()
{
    float a;
    float b;
    printf("Podaj liczbe a: \n");
    scanf("%f", &a);
    printf("Podaj dzielnik b: \n");
    scanf("%f", &b);
    printf("Wynik: %f", dzielenie(a,b));
    return 0;
}