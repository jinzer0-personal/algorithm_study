//hyeri_week2_3.c
//1�� �� ������(������ with ���̽� p.99)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, k, num = 0;
	//n,k �� �Է¹ޱ�(n>k)
	scanf("%d %d", &n, &k);

	//n�� k�� ���������� ���� ��� 1 ���� num Ƚ�� ����
	while (n % k != 0)
	{
		n -= 1;
		num++;
	}
	//n�� k�� �������� ��� k�� ������ num Ƚ�� ����
	while (n > 1)
	{

		n= n / k;
		num++;
	}

	//����� ���
	printf("%d", num);
	return 0;
}