#include<stdio.h>

void print(int *p, char *q)
{
	int i;
	for(i = 0; i < 5; i++) 
	{
		printf("%d", *(p + i));
	}
	for(i = 0; i < 5; i++)
		printf("%c", *(q + i));
}

int main()
{
	int a[5] = {1, 2, 3, 4, 5}, *p;
	char *q;
	char b[5] = {'a', 'b', 'c', 'd', 'e'};
	
	int i;
	
	p = &a[0];
	q = &b[0];
	//print(p);
	print(a, b);
	
	return 0;
}
