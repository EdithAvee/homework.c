#include <stdio.h>
int main(){
    int a=0;
    int b=0;
    int i=0;
printf("a= ");
scanf("%d",&a);

printf("b= ");
scanf("%d",&b);

 for(i=a; i <=b; ++i){
   if(i %5 ==0){
      printf("%d \n",i);
  }
}

 return 0;
}
