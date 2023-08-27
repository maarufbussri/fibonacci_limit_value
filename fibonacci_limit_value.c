#include <stdio.h>

int main()
{
	int i = 0, j = 1, k = 1;

	printf("0 1 ");

	while (k < 100)
	{
		k = i + j; i = j; j = k;
		printf("%d ", k);
	}

	return 0;
}
