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

	int product = 1;

	for(int i = 0; i < n; i++)
		product = product * a[i];

	for(int i = 0; i < n; i++)
		b[i] = product / a[i];
 
	return b;
}

int * make_aray_without_div(int *a, int n)
{
	int *prefix = new int[n];
	int *suffix = new int[n];
	int *b = new int[n];

	prefix[0] = 1;

	for(int i = 0; i < n-1; i++)
		prefix[i+1] = prefix[i] * a[i];

	suffix[n-1] = 1;

	for(int i = n-1; i > -1; i--)
		suffix[i-1] = suffix[i] * a[i];

	for(int i = 0; i < n; i++)
		b[i] = prefix[i] * suffix[i];

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