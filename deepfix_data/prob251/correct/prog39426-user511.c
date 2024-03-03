#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int arr[3]={1,3,5};
long getways(int x,int m) {
    if(x<0)return 0;
    if(x==0)return 1;
    if(m<=0) return 0;
    if(memarray[x-1][m-1]!=-1) return memarray[x-1][m-1];
        long temp=getways(x,m-1)+getways(x-arr[m-1],m);
        memarray[x-1][m-1]=temp;
        return temp; }
int main() {
    int n;
    scanf("%d",&n);
        memarray[0]=malloc(sizeof(long)*n);
        memarray[1]=malloc(sizeof(long)*n);
        memarray[2]=malloc(sizeof(long)*n);
    for(int i=0;i<n;i++) {
        memarray[0][i]=-1;
        memarray[1][i]=-1;
        memarray[2][i]=-1; }
    printf("%ld",getways(n,3));
    for(int i=0;i<3;i++) {
        free(memarray[i]); }
    return 0; }