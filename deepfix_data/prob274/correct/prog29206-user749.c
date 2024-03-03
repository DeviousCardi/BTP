#include <stdio.h>
int main(){
    int n,i,j,t,k;
    int exit[100];
    int route[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&exit[i]); }
    route[0]=1;
    for(i=1;i<2*n;i++){
    route[i]=exit[route[i-1]-1]; }
    t=0;
    for(i=0;i<2*n;i++){
        for(j=i+1;j<2*n;j++){
            if(route[i]==route[j]){
            t=j;
            printf("%d ",t);
            break; } }
        if(t!=0) break; }
    k=j-i;
    printf("%d ",k);
    return 0; }