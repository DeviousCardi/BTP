#include <stdio.h>
int main(){
    int i,j,n,k,s=0;
    scanf("%d",&k);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if((a[i]+a[j])==k)
            s+=1;
            if(s>0)
            break; } }
    if(s>0)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }