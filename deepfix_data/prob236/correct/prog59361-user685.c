#include <stdio.h>
int main(){
    int k,i,j,n,initial[1000],index[1000],final[1000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
       scanf("%d",&initial[i]); }
    printf("\n");
    for(j=0;j<n;j++){
       scanf("%d",&index[i]); }
    for(k=0;k<n;k++){
        final[k]=initial[(index[k])];
        printf("%d ",final[k]); }
    printf("end");
    return 0; }