#include <stdio.h>
int main() {
    int n,m,i,j,heap,gold,mxgold;
    gold=0;
    mxgold=0;
    scanf("%d %d \n",&n,&m);
        for (i=0; i<n; i=i+1) {
            for (j=0; j<m; j=j+1) {
             scanf("%d",&heap);
             gold=gold+heap; }
    if(mxgold<gold){mxgold=gold;}
    gold=0;
    scanf("\n"); }
    printf("%d",mxgold);
    return 0; }