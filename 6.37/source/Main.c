##include <stdio.h>
int max_value(int *, int);
main()
{
	int max, min, n;
	int a[100];
	printf("請輸入陣列大小: ");
	scanf_s("%d", &n);
	printf("請輸入陣列數據: \n");
	for (int i = 0; i < n; i++)
	{
		printf("第%d個數字: ", i + 1);
		scanf_s("%d", &a[i]);
	}
	max = max_value(a, n - 1);
	printf("最大值為%d\n", max);
}

int max_value(int *a, int j)
{
	int m;
	if (j == 1)
	{
		return a[0];
	}
	else
	{
		m = max_value(a, j - 1);
	}
	if (a[j - 1] > m)
	{
		return a[j - 1];
	}
	else
	{
		return m;
	}
}