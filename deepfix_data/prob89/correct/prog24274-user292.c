#include <stdio.h>
int main(){
    int k,n,i,j,sum=0,flag=0;
    scanf("%d",&k);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            sum=a[i]+a[j];
            if(sum==k) {
                printf("lucky");
                flag=1;
                break; } }
        if(flag==1) {
            break; } }
    if(flag==0) {
        printf("unlucky"); }
    return 0; }