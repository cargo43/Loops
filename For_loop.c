#include<stdio.h>

int main()
{
	int n,i,sum=0;
	printf("Enter a positve number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;++i)
	{
		sum+=i;
	}
	printf("Sum of first natural number = %d",sum);
	return 0;
}


