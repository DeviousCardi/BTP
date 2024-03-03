#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int a[],int m,int n) {
    if(n==0)
    return 1;
    else if(n<0)
    return 0;
    else if(m<0)
    return 0;
    else {
        return getways(a,m-1,n)+getways(a,m,n-a[m]); } }
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int a[3]={1,3,5};
    printf("%ld",getways(a,2,n));
    for(i=0;i<3;i++) {
        memarray[i]=(int*)malloc(n*sizeof(int)); }
    return 0; }