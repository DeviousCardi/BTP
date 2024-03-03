#include <stdio.h>
int main(){
    int k,n,i,j;
    int m=0;
    scanf("%d",&k);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    for(p=0;p<k;k++){for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]+a[j]==k && m==0){printf("lucky");m++;}
            if(m==1)break; }
        if(m==1)break; }
        if(m==0){printf("unlucky");} }
    return 0; }