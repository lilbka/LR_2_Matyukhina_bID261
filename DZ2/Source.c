#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <math.h>

int main() //вариант 18
{
    setlocale(LC_ALL, "RUS");

    double L1 = 200.0;
    double L2 = 300.0;
    double V1 = 15.0;
    double V2 = 20.0;

    double lengthsum = L1 + L2;
    double speedsum = V1 + V2;
    double time = lengthsum / speedsum;

    printf("длина первого поезда L1 = %.0f м\n", L1);
    printf("длина второго поезда L2 = %.0f м\n", L2);
    printf("скорость первого поезда V1 = %.0f м/с\n", V1);
    printf("скорость второго поезда V2 = %.0f м/с\n", V2);
    printf("суммарная длина поездов = %.0fм\n", lengthsum);
    printf("скорость сближения = %.0fм/с\n", speedsum);
    printf("поезд длиной %.0f м со скоростью %.0f м/с и поезд длиной %.0f м со скоростью %.0f м/с проходят друг против друга за %.2f секунд.\n", L1, V1, L2, V2, time);
}