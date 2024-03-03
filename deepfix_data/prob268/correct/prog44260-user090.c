#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int main() {
    int N,i;
    scanf("%d",&N);
    *memarray[0]=1;
    *memarray[1]=3;
    *memarray[2]=5;
    for(i=0;i<3;i++) {
        printf("%ld",*memarray[i]); }
    return 0; }