//�Ǻ���ġ

#include <stdio.h>

int main(void)
{
	long long n, result, a, b;

	a = 0;
	b = 1;
	result = 0;

	scanf("%lld", &n);

	if (n == 0){				//n=0 �� ��� ���� 0
		printf("0");
	}
	else if (n == 1) {			//n=1 �� ��� ���� 1
		printf("1");
	}
	else {

		for (int i = 1; i < n; i++)		//n=2 �̻���ʹ� for������ ����Ͽ� ���
		{
			result = a + b;
			a = b;
			b = result;
		}
		printf("%lld", result);			//n��° �� ���
	}
	
	return 0;

}	