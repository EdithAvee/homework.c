#include <stdio.h>
int main(){

int i = 0;

for(i = 0; i <= 100; i++){
   
//1
   if(i %3 ==0){
     printf("Fizz");
 }
//2
 
   if(i %5 ==0){
     printf("Buzz");
 }
//3

   if(i %15 ==0){
     printf("FizzBuzz");
 }


printf("%d \n", i);

}

return 0;
}

