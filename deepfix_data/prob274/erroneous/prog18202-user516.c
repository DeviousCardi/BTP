#include <stdio.h>
int main(){
    int n,i,a[101],t,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",a[i]);
    int moves[101];
    moves[1]=1;
    int j=2;
    while(k==0){
        moves[j]=a[moves[j-1]];
        for(l=1;l<j;l++){
            if(moves[j]==moves[l]){
                k=j-1;
                t=j-l;
                break; } } }
    printf("%d%d",t,k);
    return 0; }