#include <stdio.h>
int main(){
    int k,i,n,j;
    scanf("%d",&k);
    scanf("%d",&n);
    int num[n];
    for(i=0;i<=n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<=n;i++) {
        for(j=i+1;i<=n;j++) {
            if(num[i]+num[j]==k)
            printf("lucky");
            break;
            printf("unlucky"); } }
    return 0; }