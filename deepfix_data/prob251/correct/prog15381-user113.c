#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long int count=0;
long getways(int x, int m) {
    if(memarray[m][x]!=-1)
       memarray[m][x]=getways(x,m-1)+getways(x-(2*m-1),m);
    return memarray[m][x]; }
int main() {
    int total;
    scanf("%d",&total);
    for(int i=0;i<3;i++){
        memarray[i]=(long*)malloc((total+1)*sizeof(long));
        for(int j=0;j<total;j++){
            if(i!=0)
            memarray[i][j]=-1;
            else memarray[0][j]=1; } }
    memarray[0][0]=0;memarray[1][0]=0;memarray[1][1]=1;memarray[1][2]=1;
    memarray[1][3]=2;memarray[1][4]=2;memarray[1][5]=2;memarray[2][1]=1;
    memarray[2][2]=1;memarray[2][3]=2;memarray[2][4]=2;memarray[2][5]=3;
    printf("%ld",getways(total,2));
    return 0; }