#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int y) {
    int i,c,s=0;
    if(y==1)
        return 1;
    else if(y==2)
        return(x/3+1);
    else {
        c=x/5;
        for(i=1;i<=c;i++)
            s=s+getways((x-5*i),2);
        return s; } }
int main() {
    int n,c1,c2,c3;
    scanf("%d",&n);
    c1=getways(n,3);
    c2=getways(n,2);
    c3=c2+c1;
    printf("%ld ",c3);
    return 0; }