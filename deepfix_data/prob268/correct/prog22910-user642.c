#include <stdio.h>
#include <stdlib.h>
int n;
long *memarray[3];
long getways(int x, int m) {
    if(x<0) return 0;
    if(m==1) return 1;
    if(m==2) return getways(x-3,2)+getways(x,1);
    if(m==3) return getways(x-5,3)+getways(x,2); }
int main() {
    for (int j = 0; j < 3; j++)
    memarray[j] = (int*) malloc (n*sizeof(int));
    scanf("%d",&n);
    printf("%ld",getways(n,3));
    return 0; }