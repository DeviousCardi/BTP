#include <stdio.h>
int main(){
    int n,r[100],t,i,j,k;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        scanf("%d",&r[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(r[i]==r[j]){
            t=i+1;
            k=i-j+1;
            printf("%d %d",t,k);} } }
    return 0; }