#include <stdio.h>
int  main() {
 
 int a=0;
 printf("enter a: ");
 scanf("%d", &a);

 int num = a & 1;
 
 if (num %2 == 0){
    printf("even \n");

} else{
  printf("odd \n");

}
 return 0;
}
