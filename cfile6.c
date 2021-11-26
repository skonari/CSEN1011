#include <stdio.h>
int main()
{
int a,b,c,d,e;
float t,ave,pm;
printf("enter the marks of five subjects");
scanf("%d%d%d%d%d" ,&a,&b,&c,&d,&e);  
t=a+b+c+d+e;
ave=t/5;
pm=(t/500)*100;
printf("the t is %f\n avg is %f\n pm is %f\n ",pm ,ave, t);
return 0 ;

}

