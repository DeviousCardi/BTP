#include <stdio.h>
int main(){
    int o,k,i,j,n,m,initial[1000],index[1000],final[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&initial[i]); }
    for(j=0;j<n;j++){
       scanf("%d",&index[i]); }
    for(k=0;k<n;k++){
        final[index[k]]=initial[k]; }
    for(o=0;o<n;o++){
        printf("\n%d %d",initial[o], index[o]); }
    printf("end");
    return 0; }