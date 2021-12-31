#include<stdio.h>
int main(){

  int a,div,remainder;
  printf("enter an integer");
  scanf("%d",&a);
  printf("enter a div");
  scanf("%d",&div);
 remainder=a-div*(a/div);
  printf("remainder is %d",remainder);
return 0;	
}
