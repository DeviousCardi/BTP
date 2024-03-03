#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int coin[4];
long getways(int x, int m) {
    if(x==0||m==1){
        return 1; }
    int v,count=0;
    for(v=0; v*coin[m]<=x;++v){
        count=count+getways(x-v*coin[m],m-1); }
    return count; }
int main() {
    int x;
    coin[3] = 5;
    coin[2] = 3;
    coin[1] = 1;
    scanf("%d",&x);
    printf("%d",getways(x, 3));
return 0; }