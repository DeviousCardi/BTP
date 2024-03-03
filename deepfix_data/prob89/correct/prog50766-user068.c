#include <stdio.h>
int main(){
    int k,n,i,j,s,flag=0;
    scanf("%d /n",&k);
    scanf("%d /n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            s=a[i]+a[j];
            if(s==k)
                flag=1; } }
    if(flag==1)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }