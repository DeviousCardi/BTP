#include <stdio.h>
int main(){
    int k,n,i,x,b[1000];
    scanf("%d %d",&k,&n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++){
    x=k-b[i];
    for(i=0;i<n;i++){
        if(x==b[i]){
            printf("lucky");break; }
        else
        printf("unlucky");
        break; } }
    return 0; }