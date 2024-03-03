#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char memarray[3]="13523";
long getways(int x, int m) {
    if(m==0) {
        printf("%d %d %d",memarray[0],memarray[1],memarray[2]); }
    return getways(x+1,m)||getways(x+1,m-(*memarray)); }
int main() {
    int i,j,m,count;
    scanf("%d",&m);
  printf("mmm%djjddr",strlen(memarray));
    return 0; }