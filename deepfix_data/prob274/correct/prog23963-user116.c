#include <stdio.h>
int main(){
    int n,i,j,k;
    int num[n],x[n];
    for(i=0;i<n;i++){
        scanf("%d ",&num[i]); }
    x[1]=num[0];
    for(j=1;j<n;j++){
        x[j+1]=num[x[j]-1];
        for(k=j+1;k>=0;k--){
            if(x[k]==x[j+1]){
                break; } } }
    printf("%d+1 %d+1-%d",j,j,k);
    return 0; }