#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int memarray[3]={1,3,5};
long getways(int x, int m, int memarray[]) {
    if(m==0) {
        return 1; }
    if(x==0|m!=0) {
    return 0; }
    return getways(x-1,m,memarray)+getways(x,m-memarray[x-1],memarray); }
int main() {
    int i,j,m,count;
    scanf("%d",&m);
    j=3;
  getways(3,m,memarray);
  printf("%d",getways(3,m,memarray));
    return 0; }