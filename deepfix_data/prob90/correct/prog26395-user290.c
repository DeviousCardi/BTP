#include <stdio.h>
int main(){
    int k,n,i,j,count = 0,d;
    int a[500];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&d);
        a[d] = 1;
    }for(i=0;i<500;i++){
        if(a[i] && a[k-i]){
            count = 1; } }
    if(count ==0){
        printf("unlucky");
    }else if(count == 1){
        printf("lucky"); }
    return 0; }