#include <stdio.h>
int main() {
    int a,b,c,d,n,t=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int k=(a*1000)+(b*100)+(c*10)+d;
    n=(a+b+c+d);
    int i;
    for(i=(k+1);i<n;i++)
        { int j;
             j=(k%n);
            if(j==0) {
                     printf("%d",i);
                        break; }
            t=1; }
    return 0; }