#include <stdio.h>
#include <stdlib.h>
long getways(int x,int m) { {
        if(x<0)
            return 0;
        else if(m==1)
            return 1;
        else if(m==2)
            return getways(x,1)+getways(x-3,2);
        else if(m==3)
            return getways(x,2)+getways(x-5,3); } }
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    printf("%ld",getways(n,3));
    return 0; }