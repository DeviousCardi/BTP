#include <stdio.h>
int main(){
    int n,m,j;
    scanf("%d",&n);
    m=n%10+(n%100)/10+(n%1000)/100+(n%10000)/1000;
    for(j=2016;;j=j+1)
        {if(j%m==0)
            {printf("%d",j);
             break;};}
    return 0; }