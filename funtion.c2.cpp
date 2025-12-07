// function with argument with out return type :

#include<stdio.h>
void addition (int,int);
int main()
{
	int a,b;
	printf("enter 2 numbers ");
	scanf("%d%d",&a,&b);
	
	addition(a,b);
	
}
    void addition (int x,int y) 
{
	int c;
	c=x+y;
	printf("The result is %d",c);
	
}
