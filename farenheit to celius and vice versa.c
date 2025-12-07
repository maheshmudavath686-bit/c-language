#include<stdio.h>
main ()
{
	float c,f,newc,newf;
	printf("enter f value");
	scanf("%f",&f);
	
	newc = (f-32)/1.8;
	printf("temp in celcius is : %f\n",newc);
	printf("enter c  value");
	scanf("%f",&c);
	newf = c*1.8+32;
	
	printf("temp in farenheit is :%f\n",newf);
}
