#include <locale.h>
#include <stdio.h>
#include <math.h>
#define M_PI            3.14159265358979323846
#define k 1.2

void main()
{
	setlocale(LC_CTYPE, "RUS");
	task2();

}

int task1()
{
	int gr = 0;

	puts("������� ���-�� ��������: ");
	scanf("%d", &gr);

	printf("����� %d ��������: %.6f", gr, sin(gr * M_PI / 180));

}

int task2()
{
	float x = 0;

	puts("������� �������� x: ");
	scanf("%f", &x);

	float a = exp(x * k);
	float b = pow(log(x), 2) + pow(k, 5);

	float y = pow(pow(a, 2) + pow(b, 2), 1. / 3);

	printf("�������� ��������� ��� ��������� %f: %.2f", x, y);
}