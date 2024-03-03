#include <stdio.h>
#include <stdlib.h>
long count=0;
int coins[]={1,3,5};
long *memarray[3];
void getways(int x, int m) {
    if(m==1){
        count++;
        return; }
    else{
        long max=x/coins[m-1];
        int i;
        for(i=0;i<=max;i++){
            int total=i*coins[m-1];
            getways(x-total,m-1); } } }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<3;i++){
        memarray[i]=(long*)(malloc(n*sizeof(long))); }
    getways(n,3);
    printf("%ld",count);
    return 0; }