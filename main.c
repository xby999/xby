#include "myhead.h"

int main()
{
	int base1[UNUMBER],base2[UNUMBER];
	int i,n;
	struct timeval tv1, tv2;
	struct timezone tz;

	srand((int)time(0));
	printf("input n(n<=50)\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		base1[i] = 1 + (int)(100.0*rand()/(RAND_MAX+1.0));
		base2[i] = 1 + (int)(100.0*rand()/(RAND_MAX+1.0));
	}

	gettimeofday(&tv1,&tz);
	msort(base1,n);
	gettimeofday(&tv2,&tz);
	printf("mysort time is %ld\n", tv2.tv_usec - tv1.tv_usec);


	gettimeofday(&tv1,&tz);
	qsortt(base2,n);
	gettimeofday(&tv2,&tz);
	printf("qsort time is %ld\n", tv2.tv_usec - tv1.tv_usec);
	return 0;
}
