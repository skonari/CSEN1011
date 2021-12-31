#include<stdio.h>
int main(){
int n,n1,s=0,r;
printf("enter a three digit integer");
scanf("%d",&n);
n1=n;
while(n!=0){
r=n/10;
s=s+(r*r*r);
n=n/10;
}
if(r=n)
printf("%d is an amstrong number");
else
printf("%d is not an amstrong number");
return 0;
}





