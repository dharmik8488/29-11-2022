#include<stdio.h>

main(){
	
	int a[10]= {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	int sum = 0;
	int i = 0;
	float aver;
	
	for(i=0; i<10; i++){
		
		sum = sum + a[i];
	}
	
	aver = (float)sum / i;
	
	printf("Average :- %f",aver);
	
	}
