#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long no=0;
long getways(int x, int m) {
    if(x<=0)
        return 0;
    else if(m==2) {
        no=x/3;
        return no; }
    else {
        while(x>0) {
            x-=5;
            no=no+getways(x,2)+1; }
        return no; } }
int main() {
    int n;
    scanf("%d",n);
    for(int i=0;i<3;i++)
        memarray[i]=(long *)malloc(sizeof(long));
    memarray[0][0]=1;
    for(int i=1;i<3;i++) {
        no=0;
        memarray[i][0]=getways(n,i+1); }
    long sum=memarray[0][0]+memarray[1][0]+memarray[2][0];
    printf("%ld",sum);
    return 0; }