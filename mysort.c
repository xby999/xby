#include "myhead.h"

void msort(int * base,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(base[j] > base[j+1])
			{
				t = base[j];
				base[j] = base[j+1];
				base[j+1] = t;
			}
		}
	}
}

void show(int *base,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d",base[i]);
	printf("\n");
}
