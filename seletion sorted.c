#include<stdio.h>
 main(){
	int a[5]={80,60,20,70,10,50};
	int i,j,min,temp;
	for(i=0;i<5;i++)
	{
		min=i;
		for(j=i+1;j<6;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		
	}
	printf("seletion sorted:");
		for(i=0;i<6;i++)
		printf("%d",a[i]);
		
}
