#include <stdio.h>
int main(){
    int i,j,k,n,ch;
    char a[1000];
    ch=getchar();
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        a[i]=ch;
        ch=getchar(); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]+a[j]==k) {
                printf("lucky");
                break; }
            if(i==n-1&&j==n-1) {
                printf("unlucky"); } } }
    return 0; }