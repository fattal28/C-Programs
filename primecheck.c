#include <stdio.h>

int main(void)
{
	int i, n;
	int c = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			c++;
		}
	}

	if (c == 2)
	{
		printf("This is a prime number.\n");
	}
	else
	{
		printf("This is not prime.\n");
	}
	return 0;
}


w
