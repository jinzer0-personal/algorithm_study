//�Ҽ�

#include <stdio.h>

int prime(int p); //�Ҽ����� �Ǵ��ϴ� �Լ�

int main(void)
{

	int m, n;
	int min = 0, mexist = 0, sum = 0;
	scanf("%d %d", &m, &n);				//���� �Է�

	for (m; m <= n; m++)
	{
		if (prime(m) == 1)				//prime �Լ��� ���ϰ��� 1�̸� m �� �Ҽ�
		{
			if (mexist == 0)			//�ּҰ��� ������ min�� �ּҰ� m ����
			{
				min = m;
				mexist = 1;				//�ּҰ��� ����� �� �̻� �ּҰ��� ã�� �ʿ䰡 ����
			}
			sum += m;					//�Ҽ����� ��
		}
	}
	if (sum == 0)						//���� ���� �Ҽ��� ���� ��
	{
		printf("-1");
		return -1;
	}

	printf("%d\n", min);				
	printf("%d", sum);

	return 0;

}

int prime(int p)
{
	if (p == 1)							//1�� �Ҽ��� �ƴ�
		return 0;
	
	if (p == 2)							//2�� �Ҽ�
		return 1;
	
	else {								//3 �̻��� ���� ���
		
		for (int i = 2; i < p; i++)
			if (p % i == 0)
				return 0;	
		return 1;

	}
}