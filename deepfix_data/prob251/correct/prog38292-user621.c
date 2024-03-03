#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
 int values[3]={1,3,5};
long getways(int x, int m) {
    if(x<0)
        return 0;
    if(x==0)
        return 1;
    if(m<=0)
        return 0;
    if(memarray[m-1][x-1]!=-1)
    return memarray[m-1][x-1];
    long temp=getways(x,m-1)+getways(x-values[m-1],m);
    memarray[m-1][x-1]=temp;
    return temp; }
int main() {
    int n;
    scanf("%d",&n);
    memarray[0]=malloc(n*(sizeof(long int)));
    memarray[1]=malloc(n*(sizeof(long int)));
    memarray[2]=malloc(n*(sizeof(long int)));
    for(int i=0;i<n;i++) {
        memarray[0][i]=-1;
        memarray[1][i]=-1;
        memarray[2][i]=-1; }
    printf("%ld",getways(n,3));
    return 0; }