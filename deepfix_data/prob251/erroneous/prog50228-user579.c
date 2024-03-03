#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if(m==1&&x>0)
        return 1; }
int main() {
    int n;
    scanf("%d",&n);
    for(i=0;i<3;i++) {
        memarray[i]=(long*)malloc(n*sizeof(long)); }
    printf("%ld",getways(n,3));
    return 0; }