#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846

int main()
{
	setlocale(LC_ALL, "");

	double x, y, z, t;

	printf("¬ведите три числа: ");
	scanf("%lf %lf %lf", &x, &y, &z);

	double znam = 2 * cos(x - M_PI / 6);
	double chisl = 0.5 + pow(sin(y), 2);
	double skob = 1 + (z * z) / (3 - (z * z) / 5);
	t = (znam / chisl) * skob;

	printf("–езультат: %lf\n", t);


	return 0;
}