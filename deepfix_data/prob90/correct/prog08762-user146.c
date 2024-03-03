#include <stdio.h>
int main(){
    int k,n,c,i,x,b[1000];
    scanf("%d %d",&k,&n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    for(i=0;i<n;i++){
    x=k-b[i];
    for(i=0;i<n;i++){
        if(x==b[i]){
            c=2;
            printf("lucky ");
            break;
        }if(c=2)
        break;
        else
        continue;
    }printf("unlucky "); }
    return 0; }