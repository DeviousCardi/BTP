#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int values[3]={1,3,5};
long getways(int x, int m) {
    if(x<0){
        return 0; }
    if(x==0){
        return 1; }
    if(m==1){
        return 1; }
    else{
        if(memarray[m-1][x-1]==-1){
            memarray[m-1][x-1]=getways(x,m-1)+getways(x-values[m-1],m)
            return memarray[m-1][x-1]; }
        else{
            return memarray[m-1][x-1]; } } }
int main() {
    int n;
    scanf("%d",&n);
    memarray[0]=malloc(n*sizeof(long ));
    memarray[1]=malloc(n*sizeof(long));
    memarray[2]=malloc(n*sizeof(long));
    for(i=0;i<n;i++){
        memarray[0][i]=-1;
        memarray[1][i]=-1;
        memarray[2][i]=-1; }
    printf("%ld",getways(n,3));
    return 0; }