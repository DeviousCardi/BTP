#include <stdio.h>
int main(){
    int k,n,i,j,flag=0;
    scanf("%d%d",&k,&n);
    int num[n];
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(num[j]%2==num[i]%2)
                continue;
            if((num[i]+num[j])==k) {
                flag=1; } } }
    if(flag==0)
        printf("unlucky");
    if(flag==1)
        printf("lucky");
    return 0; }