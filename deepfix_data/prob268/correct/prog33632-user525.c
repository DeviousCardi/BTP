#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int c=0;
long getways(int x, int m) {
    if(m==1)
    return 1;
    if(m==2)
    return x/3;
    if (m==3&&x>=5)
    return getways(x-5,m-1)+1;
    if (m==3&&x==0)
    return 1; }
int main() {
    int m,n;
    scanf("%d",&n);
    for(m=1;m<4;m++)
    c=c+getways(n,m);
    printf("%d",c);
    return 0; }