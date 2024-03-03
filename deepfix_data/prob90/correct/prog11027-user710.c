#include <stdio.h>
int main(){
    int n,i,k,x,y=0;
    scanf("%d",&k);
    scanf("%d",&n);
    int a[1000];
    for(i=0;i<1000;i++){a[i]=0;}
    for(i=0;i<n;i++){
        scanf("%d",&x);
        a[x]++; }
    for(i=0;i<=499;i++){
        if(a[i]>0&&a[k-i]>0){printf("lucky");y++;break;} }
    if(y==0){printf("unlucky");}
    return 0; }