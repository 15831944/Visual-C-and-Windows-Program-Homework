#include"stdafx.h"
#include"w32.h"
int factorial(int n)
{
	if (n < 0||n>12) return 0;
	int sum = 1;
	for(int i=1;i<=n;i++)
		sum = sum*i;
	return sum;
}