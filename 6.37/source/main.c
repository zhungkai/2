#include<stdio.h>
#include<stdlib.h>

int Maximum(int *a[]);
int size;

int main()
{
	int i;
	int j;
	int get;
	int Max[100];
	printf("�аݧA�n��J�X�ӼƦr:");
	scanf_s("%d", &size);

	printf("�п�J�@�ǼƦr��}�C��:");
	for (i = 0;i<size;i++)
	{
		scanf_s("%d", &Max[i]);
	}
	j=Maximum(&Max);
	printf("���}�C���̤j���ƬO:%d\n", j);
	system("pause");
}
int Maximum(int *a[])
{
	int i;
	int big=0;
	for (i = 0;i < size;i++)
	{
		if (a[i] > big)
		{
			big = a[i];
		}
	}
	return big;
}