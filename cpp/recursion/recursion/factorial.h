#pragma once

int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	return 1;
}

int factorial_nonrecursion(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}