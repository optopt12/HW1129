##include <stdio.h>
int max_value(int *, int);
main()
{
	int max, min, n;
	int a[100];
	printf("�п�J�}�C�j�p: ");
	scanf_s("%d", &n);
	printf("�п�J�}�C�ƾ�: \n");
	for (int i = 0; i < n; i++)
	{
		printf("��%d�ӼƦr: ", i + 1);
		scanf_s("%d", &a[i]);
	}
	max = max_value(a, n - 1);
	printf("�̤j�Ȭ�%d\n", max);
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