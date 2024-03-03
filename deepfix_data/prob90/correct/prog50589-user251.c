#include <stdio.h>
int main(){
    int i,j,k,n,b,count=0;
    char a[1000];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&b);
        a[i]=b; }
    printf("%s",a);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if((a[i])+(a[j])==k) {
                printf("lucky");
                return 0; }
            if(i==n-1&&j==n-1) {
                printf("unlucky"); } } }
    return 0; }