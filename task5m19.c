#include <stdio.h>
int main(){

	int a = 0;
	printf("enter num: ");
        scanf("%d", &a);
	int f = 1 ;
	int i = 0;

 for(i = 1 ; i <= a ; i++){

             f = f * i;
 }

	     printf("a!= %d \n", f);
 	     
   return 0;

}      
