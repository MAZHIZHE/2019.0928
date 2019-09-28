# include<stdio.h>
int main()
{
	int i = 0;
	int arr1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr2[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int t = 0;
	for (i = 0; i <10; i++)
	{
		t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;

	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;


}
