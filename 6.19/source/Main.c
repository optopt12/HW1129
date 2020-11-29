#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)

{

	int d1, d2, i, j, k, q;
	unsigned int a[36];

	for (q = 0; q < 36; q++)
	{
		a[q] = 0;
	}

	srand(time(NULL));

	for (i = 0; i < 36000; i++)

	{
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;

		for (k = 0; k < 6; k++)
		{
			for (j = 0; j < 6; j++)
			{
				if (d1 == j + 1 && d2 == k + 1)
				{
					a[(j + 1) + (6 * k) - 1] = a[(j + 1) + (6 * k) - 1] + 1;
				}
			}
		}
	}
	printf("    1      2     3     4     5     6\n\n");
	printf("1  %5d %5d %5d %5d %5d %5d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
	printf("2  %5d %5d %5d %5d %5d %5d\n", a[6], a[7], a[8], a[9], a[10], a[11]);
	printf("3  %5d %5d %5d %5d %5d %5d\n", a[12], a[13], a[14], a[15], a[16], a[17]);
	printf("4  %5d %5d %5d %5d %5d %5d\n", a[18], a[19], a[20], a[21], a[22], a[23]);
	printf("5  %5d %5d %5d %5d %5d %5d\n", a[24], a[25], a[26], a[27], a[28], a[29]);
	printf("6  %5d %5d %5d %5d %5d %5d\n", a[30], a[31], a[32], a[33], a[34], a[35]);
	system("pause");
}