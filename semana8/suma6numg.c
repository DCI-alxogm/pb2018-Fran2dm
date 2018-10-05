#include<stdio.h>
#include<stdlib.h>
int mauin()
{
	int i,sum=0;
	long int *num;
	printf("Introduce 6 números:\n");
	
	num=(int*) malloc(num*long unsigned(int));
	
	for(i=0;i<6;i++){
	//(num+i) es equivalente a num[i]
	scanf("%d",&num[i]);
	//*(num+i) es equivalente a num[i]
	sum+=num[i];
	}
	printf("Suma=%d",sum);
	return 0;
	}
