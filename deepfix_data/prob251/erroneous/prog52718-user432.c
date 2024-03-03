#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    if(m==1){
        memarray[m-1]=1;
        getways(x,m+1); }
    if(m==2){
        memarray[m-1]=memarray[m-2]+x/3;
        getways(x,m+1); }
    if(m==3){
        memarray[m-1]=0
        for(i=1;i<=x/5;i++){
            memarray[m-1]=memarray[m-1]+(x-5*i)/3+1; }
        memarray[m-1]=memarray[m-1]+memarray[m-2];
        return ; } }
int main() {
    int n;
    scanf("%d",&n);
    getways(x,1);
    printf("%ld",memarray[2]);
    return 0; }