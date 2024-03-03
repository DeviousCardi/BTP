#include <stdio.h>
#include <stdlib.h>
long int*memarray[3];
long getways(int x, int m) {
    for(int i=0;i<3;i++) {
        memarray[i]=malloc(x*sizeof(int)); }
    if(m==1) {
        memarray [x][1]=1;
        return 1; }
    if((m==3)&&(x>=5))
    return memarray[m-1][x]+memarray[m][x-5];
    else if(m==3)
    return memarray[m-1][x];
    if((m==2)&&(x>=3))
    return memarray[m-1][x]+memarray[m][x-3];
    else if(m==2)
    return memarray[m-1][x]; }
int main() {
    int x;
    scanf("%d",&x);
    return 0; }