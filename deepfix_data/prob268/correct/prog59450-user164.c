#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    for(int i=0;i<3;i++) {
        memarray[i]=malloc(x*sizeof(long)); }
    if(m==1) {
        memarray[m][x]=1;
        return 1; }
    if((m==3)&&(x>=5)) {
      memarray[3][x]=getways(x,m-1)+getways(x-5,m);
      return memarray[3][x]; }
    else if(m==3) {
    memarray[3][x]=getways(x,m-1);
    return memarray[2][x]; }
    if((m==2)&&(x>=3)) {
    memarray[2][x]=getways(x,m-1)+getways(x-3,m);
    return memarray[2][x]; }
    else if(m==2) {
        memarray[2][x]=getways(x,m-1);
    return memarray[2][x]; } }
int main() {
    int x;
    scanf("%d",&x);
    printf("%d",getways(x,3));
    return 0; }