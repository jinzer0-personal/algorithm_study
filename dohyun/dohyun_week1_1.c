//�� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int num[1000];		//�ʿ��� ������ ����
	int least, temp, j;

	scanf("%d", &n);	//�Է��� ���� ����

	for (int i = 0; i < n; i++) {	//�Է��� ������ num[1000]�� ����
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < n - 1; i++)		//���ʴ�� �������� ����
	{
		least = i;
		for (j = i + 1; j < n; j++)
			if (num[j] < num[least])
				least = j;
		temp = num[i];
		num[i] = num[least];
		num[least] = temp;

	}

	for (int i = 0; i < n; i++)		//�������� ������ �� ������ ���
		printf(" %d", num[i]);
	
	return 0;
	
}