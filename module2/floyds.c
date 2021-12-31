#include<stdio.h>
int main(){
int i,n,c,a=1;
printf("enter the number of rows\n");
scanf("%d",&n);
for(i=1; i<=n;i++)
{
for(c=1; c<=i;c++) 
{
printf("% d",a); 
a++;
}
printf("\n");}
return 0;
}    
