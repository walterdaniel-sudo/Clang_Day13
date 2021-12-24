#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ---- 배열 ----
// 일정한 간격을 두고 붙여놓는 것
// 특정 자료형을 가진 변수를 여러 개 선언하는 개념
// 배열 선언 방법: 자료형 배열명[공간의 개수];
// 배열의 각 공간을 나타내주는 숫자를 보고 index()라고 부른다
// 인덱스는 0 ~ (선언한 공간의 개수 -1)까지 갖고 있다. 그 이유는 인덱스는 0부터 시작하기 때문
// 배열을 사용할 때는 반복문을 적절하게 사용해줘야 한다.
// 배열을 선언하면서 초기화를 진행할 수 있는데 이때는
// int arr[5] = { 3, 1, 4, 6, 8 }; 형식으로 진행할 수 있다.
// 배열을 선언하면서 모든 공간을 0으로 초기화 할 때는
// int arr[5] = { 0, }; 형식으로 진행할 수 있다.
//

int main()
{
	/*int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

	printf("입력: ");
	scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);

	printf("출력: %d %d %d %d %d %d %d %d %d %d", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);*/

	/*int arr[10];

	arr[0] = 10;
	arr[9] = 20;

	printf("출력: %d %d\n", arr[0], arr[9]);*/
	
	// 내 풀이
	/*int arr[10];

	printf("입력: ");
	scanf("%d", &arr);

	printf("출력: %d\n", arr);*/

	// 선생님 풀이
	/*int arr[10];

	// printf("입력: ");
	for (int i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}*/

	/*int arr[5] = {3, 1, 4, 6, 8};

	printf("출력: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}*/

	/*int arr[5] = {0,};

	printf("출력: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}*/

	int arr[10];

	printf("입력: ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("출력:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d]: %d\n", i, arr[i]);
	}

	return 0;
}