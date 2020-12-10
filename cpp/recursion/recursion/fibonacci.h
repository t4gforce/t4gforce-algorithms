#pragma once

int fibonacci(int n)
{
	if (n > 2)
		return fibonacci(n - 2) + fibonacci(n - 1);
	return 1;
}

int fibonacci_nonrecursion(int n)
{
	int f1 = 1, f2 = 1;
	int s = 0;
	for (int i = 3; i <= n; i++)
	{
		s = f1 + f2;
		f1 = f2;
		f2 = s;
	}
	return f2;
}