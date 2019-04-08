#include <stdlib.h>
#include <stdio.h>
#include <utility>

using std::pair;
using std::make_pair;

pair<int,int> find_window(int *a, int n)
{
	int left = -1, right = -1; 

	//algorithm

	return make_pair(left, right);
}

int main(int argc, char *argv[])
{
	int n = argc - 1;

	int *a = new int[n];

	for(int i = 0; i < n; i++)
		a[i] = atoi(argv[i + 1]);

	pair<int,int> window = find_window(a, n);

	printf("[%d, %d]\n", window.first, window.second);

	return 0;
}