#include <stdio.h>
int main(){

 int a=0;
 printf("enter a: ");
 scanf("%d", &a);
 
 int counter=0;

 while(a){
  
    if(a & 1 == 1){
      counter++;
  
 }   
      a =  a >> 1;
  
 
 }  printf("%d \n", counter); 
    return 0;
}
