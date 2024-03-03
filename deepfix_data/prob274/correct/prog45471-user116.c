#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    int num[n],x[n];
    for(i=0;i<n;i++){
        scanf("%d ",&num[i]); }
    x[1]=num[0];
    for(j=1;j<n;j++){
        x[j+1]=num[x[j]-1];
        for(k=j;k>0;k--){
            if(x[k]==x[j+1]){
                break; } } }
    printf("%d %d",j+1,j+1-k);
    return 0; }