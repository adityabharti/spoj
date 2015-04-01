#include<stdio.h>
int main()
{
	long long int t,sum=0,n,var,i;
	scanf("%llu",&t);
	while(t--)
	{
		sum=0,n=0,var=0;
		scanf("%llu",&n);
		for(i=0;i<n;i++)
		{
			scanf("%llu",&var);
			var=var%n;
			sum+=var;
		}
		
		if(sum%n==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
