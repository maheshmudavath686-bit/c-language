// functions with arguments with out return type :
#include<stdio.h>
int addition ();

int main()
{   int result;
	result = addition ();
	printf("The sum is %d",result );
	
}

int addition ()
{
	int a,b,sum;
	
	printf("enter a&b values ");
	scanf("5d%d",&a,&b);
	
	sum= a+b;
	
	return sum;
}
