#include <stdio.h>
int main(){
    int i,j,k,n,b,count=0;
    int a[1000];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&b);
        a[i]=b; }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if((a[i])+(a[j])==k) {
                printf("lucky");
                count=count+1;
                return 0; }
            if(i==n-1&&j==n-1) {
                printf("unlucky"); } }
        if(count!=0)
        break; }
    return 0; }