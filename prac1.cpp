#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, int n)
{
	for(int i = 0; i < n; i++)
	{
		if(i == 0)
			printf("[");

		printf("%d ", a[i]);

		if(i == n - 1)
			printf("]\n");
	}
}

int * make_aray_with_div(int *a, int n)
{	
	int *b = new int[n];

	//algorithm

	return b;
}

int * make_aray_without_div(int *a, int n)
{
	int *b = new int[n];

	//algorithm

	return b;
}

int main(int argc, char *argv[])
{
	int n = argc - 1;

	int *a = new int[n];

	for(int i = 0; i < n; i++)
		a[i] = atoi(argv[i + 1]);

	int *b = make_aray_with_div(a, n);

	print_array(b, n);

	b = make_aray_with_div(a, n);

	print_array(b, n);

	return 0;
}