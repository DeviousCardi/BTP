#include <stdio.h>
int main(){
    int n,i,j,k,min;
    int ent[400];
    int dst[200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&ent[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<2*n;j++){
            for(k=j+1;k<2*n;k++){
                if(ent[j]==ent[k]){
                    printf("%d %d\n",ent[j],ent[k]);
                    dst[i]=(k-j);
                    break; } } } }
    printf("%d",ent[2]);
    return 0; }