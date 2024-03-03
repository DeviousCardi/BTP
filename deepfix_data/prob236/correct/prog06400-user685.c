#include <stdio.h>
int main(){
    int o,k,i,j,n,m,initial[1000],ind[1000],final[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&initial[i]); }
    for(j=0;j<n;j++){
        scanf("%d",&ind[j]); }
    for(k=0;k<n;k++){
        final[ind[k]]=initial[k]; }
    for(o=0;o<n;o++){
        printf("%d ", final[o]); }
    printf("end");
    return 0; }