#include <stdio.h>
int main(){
    int n,i=0,c1=0,c2=1,min=100;
    scanf("%d",&n);
    int gat[2*n];
    for(;i<(2*n);i++){
        scanf("%d",&gat[i]); }
    for(;c1<(2*n);c1++){
            c2=1;
            for(;c2<2*n;c2++){
                if(gat[c1]==gat[c2]){
                    if((c2-c1)<=min){
                            min=c2-c1; } } } }
    printf("%d",min);
    return 0; }