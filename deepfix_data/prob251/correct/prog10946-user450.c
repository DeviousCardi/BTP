#include <stdio.h>
#include <stdlib.h>
long memarray[3]={1,3,5};
long getways(int x, int m) {
    if(m==0) {
        printf("%d %d %d",memarray[0],memarray[1],memarray[2]); }
    return getways(x+1,memarray+1)||getways(x+1,m-(*memarray)); }
int main() {
    int i,j,m,count;
    scanf("%d",&m);
    getways(0,m);
    return 0; }