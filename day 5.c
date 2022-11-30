#include<stdio.h> 


main(){
	

		int d[5],b[5],c[5],i; 
			
		printf("first array\n"); 


		for(i=0;i<5;i++){
	
	 	scanf("%i",&d[i]); 
		
		}
	
		printf("second array\n");  
	
			for(i=0;i<5;i++){ 
 	
	 		scanf("%i",&b[i]);
	 		
		}
		
			for(i=0;i<5;i++){
	
				c[i]=d[i]+b[i];  
				
				printf("sum of two array is [%i] %i\n",i,c[i]); 
				
				}
  
 } 
