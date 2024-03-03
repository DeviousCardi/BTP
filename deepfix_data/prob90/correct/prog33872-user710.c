#include <stdio.h>
int main(){
    int k,n,i,j;
    int m=0;
    int a[1000];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]+a[j]==k && m==0){printf("lucky");m++;} } }
    if(m==0){printf("unlucky");}
    return 0; }