#include <stdio.h>
int main() {
    int a,b,c,d,n;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int k=(a*1000)+(b*100)+(c*10)+d;
    n=(a+b+c+d);
    int i;
    for(i=(k+1);i<27;i++)
        { int j;
             j=(k%n);
            if(j==0) {
                     printf("%d",i);
                        break; }
             continue; }
    return 0; }