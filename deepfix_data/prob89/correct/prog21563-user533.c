#include <stdio.h>
int main(){
    int i,n,k,j,flag=0;
    scanf("%d",&k);
    scanf("%d",&n);
    int num[n];
    for(i=0;i<=n;i++) {
        scanf("%d",num[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;i<n;j++) {
            if(num[i]+num[j]==k) {
                flag=1;
                printf("lucky");
                break; } }
        if(flag==1)
            break; }
    if(i==n)
    printf("unlucky");
    return 0; }