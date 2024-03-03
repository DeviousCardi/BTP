#include <stdio.h>
int main()
{int n,sum=0,p,i,year;
scanf("%d",&n);
while(n>0) {
    sum=sum+(n%10);
    n=n/10; }
        for(year=2016;year>=2016;year++) {
            if (year%sum==0)
               break; }
        printf("%d",year);
    return 0; }