#include <stdio.h>
int main(){
    int n,T1,T2;int term=0;int X=0;int Y=0;
    scanf("%d%d%d",&T1,&T2,&n);
    int i;
    for(i=1;i<=(n-4);i=i+1){
        X=T1+T2-2;
        Y=X+T2-2;
        term=X+Y-2; }
    if(n==3){term=T1+T2-2;}
    if(n==4){term=T1+(2*T2)-4;}
    printf("%d",term);
    return 0; }