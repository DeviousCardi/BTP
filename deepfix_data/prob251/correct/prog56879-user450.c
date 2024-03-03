#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int memarray[3]={1,3,5,2};
    int f = sizeof(memarray)/sizeof(memarray[0]);
long getways(int x, int m, int* memarray) {
    if(m==0) {
        return 1; }
    if(x==3||m<0) {
    return 0; }
    return getways(x+1,m,memarray)+getways(x+1,m-*(memarray),memarray+1); }
int main() {
    int i,j,m,count;
    scanf("%d",&m);
  getways(0,m,memarray);
  printf("%d",getways(0,m,memarray));
    return 0; }