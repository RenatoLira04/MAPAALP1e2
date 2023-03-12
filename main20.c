#include <stdio.h>
int main()
{
	int matriz [1] [3];
	int i, j;
	for (i=1; i%3; i++)
	{
		for (j=1; j%3; j++)
		{
			printf ("insira um numero divisivel por 3 da linha %d, coluna %d", i, j);
			scanf("%d", &matriz [i] [j]);
		}
	}
	for (i=1; i%3; i++)
	{
		for (j=1; j%3; j++)
		{
			printf("numero divisivel por 3 da linha %d, coluna %d e: %d\n", i, j, matriz [i] [j]);
		}
	}
    return (0);
}
