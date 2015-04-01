#include<stdio.h>
int main()
{
	long long int t,k,n;
	scanf("%llu",&t);
	while(t--)
	{
		scanf("%llu",&k);
		n=192+(250)*(k-1);
		printf("%llu\n",n);
	}
	return 0;
}
