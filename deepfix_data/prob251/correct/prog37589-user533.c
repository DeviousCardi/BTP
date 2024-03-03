#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int y) {
    int i,c,s=0;
    if(y==1)
        return 1;
    if(y==2)
        return(x/3+getways(x,1));
    if(y==3) {
        c=x/5;
        for(i=1;i<=c;i++)
            s=s+getways((x-5*i),2);
        return s; } }
int main() {
    int n,c;
    c=getways(n,3)+getways(n,2)+getways(n,1);
    printf("%d",c);
    return 0; }