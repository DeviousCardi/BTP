#include <stdio.h>
#include <stdlib.h>
int n,a,b,c,count=0;
long *memarray[3];
long getways(int x, int m) { {
        if(x<0)return 0;
        if(x==0)
        count++;
        getways(x-(1*(a+1)+3*b+5*c),m)||getways(x-(1*a+3*(b+1)+5*c),m)||getways(x-(1*a+3*b+5*(c+1)),m)||getways(x-(1*(a+1)+3*(b+1)+5*c),m)||getways(x-(1*a+3*(b+1)+5*(c+1)),m)||getways(x-(1*(a+1)+3*b+5*(c+1)),m)||getways(x-(1*(a+1)+3*(b+1)+5*(c+1)),m); } }
int main() {
    scanf("%d",&n);
    getways(n,1);
    getways(n,2);
    getways(n,3);
    printf("%d",count);
    return 0; }