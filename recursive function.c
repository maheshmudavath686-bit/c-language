#include<stdio.h>
int fcat (int);
main()
{
	int n,factorial;
	printf("enter a number");
	scanf("%d",&n);
	factorial=fact(n);
	printf("The factorial is %d\n",factorial);
	
}
int fact (int m)
{
	int f;
	if (m==0)
	{return 1;
	32
	
	}
	f=m*fact(m-1);
	return f;
}
