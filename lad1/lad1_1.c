#include <locale.h>
#include <stdio.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("��� ���������");
	getchar();
	return 5555;
}