#include <stdio.h>


int main ()
{
	int iResult = 0;
	int a = 10;
	int b = 8;
	int c = 6;
	int d = 5;
	int e = 2;

	iResult = a - b - c - d;
	printf("(i) iResult = %d\n", iResult);

	iResult = a + b/c/d;
	printf("(ii) iResult = %d\n", iResult);

	iResult = a/b * c * d;
	printf("(iii) iResult = %d\n", iResult);

	iResult = a % b % c % d;
	printf("(iv) iResult = %d\n", iResult);

	iResult = (a - (b - c) - d);
	printf("(v) iResult = %d\n", iResult);

	iResult = a % (b % c) * d * e;
	printf("(vi) iResult = %d\n", iResult);
}
