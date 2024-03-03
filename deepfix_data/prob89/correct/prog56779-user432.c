#include <stdio.h>
int main(){
    int k,n,i,j,flag=0;
    scanf("%d%d",&k,&n);
    int num[n];
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(num[j]%2==num[i]%2)
                continue;
            if((num[i]+num[j])==k) {
                printf("lucky");
                flag=1;
                break; } }
        if(flag==1)
            break; }
    if(i==n)
        printf("unlucky");
    return 0; }