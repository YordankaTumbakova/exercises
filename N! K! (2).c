#include<stdio.h>
int main()
{
	unsigned int factN=1;
	unsigned int factK=1;
	unsigned int factNminusK=1;
	unsigned int result;
	
    int N;
    int K;
    int NminusK;
    int i;
    do
    {
   	 	printf("Vavedete K (K>1:)");
    	scanf(" %d", &K);
	}
    while(K<=1);
   do
    {
   	 	printf("Vavedete N (N>K:)");
    	scanf(" %d", &N);
	}
    while(N<=K);
	NminusK=N-K;
    
    printf("K:%d\nN:%d\n", K,N);
    for(i=1;i<=K;i++)
    {
    	factK=factK*i;	
	}
	for(i=1;i<=N;i++)
    {
    	factN=factN*i;	
	}
	for(i=1;i<=NminusK;i++)
	{
		factNminusK=factNminusK*i;
	}
	result=(factN*factK)/factNminusK;
	printf("(N!*K!)/(N-K)!=%d", result);

    return 0;
}
