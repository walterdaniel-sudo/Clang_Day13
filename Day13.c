#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ---- �迭 ----
// ������ ������ �ΰ� �ٿ����� ��
// Ư�� �ڷ����� ���� ������ ���� �� �����ϴ� ����
// �迭 ���� ���: �ڷ��� �迭��[������ ����];
// �迭�� �� ������ ��Ÿ���ִ� ���ڸ� ���� index()��� �θ���
// �ε����� 0 ~ (������ ������ ���� -1)���� ���� �ִ�. �� ������ �ε����� 0���� �����ϱ� ����
// �迭�� ����� ���� �ݺ����� �����ϰ� �������� �Ѵ�.
// �迭�� �����ϸ鼭 �ʱ�ȭ�� ������ �� �ִµ� �̶���
// int arr[5] = { 3, 1, 4, 6, 8 }; �������� ������ �� �ִ�.
// �迭�� �����ϸ鼭 ��� ������ 0���� �ʱ�ȭ �� ����
// int arr[5] = { 0, }; �������� ������ �� �ִ�.
//

int main()
{
	/*int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

	printf("�Է�: ");
	scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);

	printf("���: %d %d %d %d %d %d %d %d %d %d", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);*/

	/*int arr[10];

	arr[0] = 10;
	arr[9] = 20;

	printf("���: %d %d\n", arr[0], arr[9]);*/
	
	// �� Ǯ��
	/*int arr[10];

	printf("�Է�: ");
	scanf("%d", &arr);

	printf("���: %d\n", arr);*/

	// ������ Ǯ��
	/*int arr[10];

	// printf("�Է�: ");
	for (int i = 0; i < 10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}*/

	/*int arr[5] = {3, 1, 4, 6, 8};

	printf("���: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}*/

	/*int arr[5] = {0,};

	printf("���: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}*/

	int arr[10];

	printf("�Է�: ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("���:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d]: %d\n", i, arr[i]);
	}

	return 0;
}