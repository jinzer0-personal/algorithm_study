//�Ӹ����

#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <string.h>

	int main(void)
	{
		int i=0;
		char str[1000];
		int result = 0;

		scanf("%s", str);	


		for (i = 0; i <strlen(str); i++) //result�� ���� ���� �Ӹ�������� �Ǵ�
		{
			if( (str[i])  ==  str[strlen(str) - i-1])
				result += 0;
			else 
				result += 1;
		}
	
		if (result == 0) {
			printf("1");//�Ӹ������ �ƴϴ�
			return 1;
		}
		else
		{
			printf("0");//�Ӹ�����̴�
			return 0;
		}

	}

