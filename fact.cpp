#include<stdio.h>
int main()
{
	int n,f=1,i;
	printf("Enter the number to which factorial is to be found out:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The factorial is: %d",f);
	return 0;
}