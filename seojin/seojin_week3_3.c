#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B, list, count = 1, result = 0, i; //A, B, list�� ������ �ε���, count�� ������ �� �ǹ�
	scanf("%d %d", &A, &B);
 
	for (list = 1; list <= B; count++){ // ������ ù��° �׺��� B��° �ױ��� �ݺ��� ����
		for (i = 0; i < count; i++){ // count�� count�� ���Ѵ�
			if ((list >= A) && (list<=B)) result = result + count; //���� ���� ���� �ε����� ��� result�� �� ����
			list++; //�������� ��, �� ��� ��쿡 ���� �ε����� ����
		}
	}
	printf("%d", result);
	return 0;
}