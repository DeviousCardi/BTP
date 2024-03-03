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
        long max=x%coins[m];
        int i;
        for(i=0;i<=max;i++){
            long total=i*coins[m];
            getways(x-total,m-1); } } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",count);
    return 0; }