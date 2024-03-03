#include <stdio.h>
int main(){
    int n,i=0,c1=0,c2=1,min=100,out=0;
    scanf("%d",&n);
    int gat[2*n];
    for(;i<(2*n);i++){
        scanf("%d",&gat[i]); }
    for(;c1<(2*n);c1++){
        int m=0;
        if(gat[c1]!=0){
            c2=1;
            for(;c2<2*n;c2++){
                if(gat[c1]==gat[c2]){
                    if(m<=min){
                            min=m;
                            out=gat[c1]; }
                    gat[c2]=0; }
                else
                    m++; } } }
    printf("%d",out);
    return 0; }