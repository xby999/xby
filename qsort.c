#include "myhead.h"

int compar (const void *a,const void *b)
{
	int *aa = (int *)a, *bb = (int *)b;
	if(*aa > *bb) return 1;
	if(*aa == *bb) return 0;
	if(*aa < *bb) return -1;
}

void qsortt(int *base,int n)
{
	qsort(base,10,sizeof(int),compar);
}
