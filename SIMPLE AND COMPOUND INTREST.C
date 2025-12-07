#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,SI,CI;
	printf("enter p,t,r values ");
	scanf("%f%f%f",&p,&t,&r);
	
	SI=p*t*r/100;
	CI=p*pow(1+r/100,t)-p;
	
	printf("simple intrest is : %f\n",SI);
	printf("compound intrest is : %f",CI);
	
	
}
