#include <stdio.h>
int main(){
    int n,i=0,c1=0,c2=1,c3=0,min=0,out=0;
    scanf("%d",&n);
    int gat[2*n];
    for(;i<2*n;i++){
        scanf("%d",&gat[i]); }
    for(;c1<2*n-1;c1++){
        if(gat[c1]!=0){
            int m=0;
            for(;j<2*n;j++){
                if(gat[c1]==gat[c2]){
                    if(m<min)
                        min=m;
                        out=gat[c1]
                        gat[c2]=0; }
                c3++; } } }
    return 0; }