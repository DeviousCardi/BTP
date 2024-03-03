#include <stdio.h>
int main(){
    int n,i=0,c1=0,c2=1,min=100,out=0;
    scanf("%d",&n);
    int gat[2*n];
    for(;i<(2*n);i++){
        scanf("%d",&gat[i]); }
    for(;c1<(2*n-1);c1++){
        if(gat[c1]!=0){
            c2=c1+1;
            for(;c2<2*n;c2++){
                if(gat[c1]==gat[c2]){
                    if((c2-c1)<=min){
                            min=c2-c1;
                            out=gat[c1]; }
                    gat[c2]=0; } } } }
    printf("%d",out);
    return 0; }