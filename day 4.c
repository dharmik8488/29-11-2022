#include<stdio.h>
  
main(){
 
    int a[5]; 
    int p = 1;
	int n = 0;
  
    for(n=0; n<5; n++){ 
    
        printf("Enter arrey %i : ",n); 
        scanf("%d",&a[n]); 
    
		 p = p * a[n];
		 
	} 
    
 
    	printf("Product :- %i\n",p); 
  
}
