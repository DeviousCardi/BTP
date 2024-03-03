#include <stdio.h>
int main() {
    int k,n,x=1;
    int a[1000],b[500];
    for(int j=0;j<500;j++) {
        b[j]=0; }
    scanf("%d",&k);
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",(a+i));
        b[a[i]]=b[a[i]]+1; }
    for(int i=0;i<n;i++) {
        if(b[i] && b[k-i] && (k-i)<=499) {
            printf("lucky");
            x=0;
            break; }
        if(!x) {
            break; } }
    if(x) {
        printf("unlucky"); }
    return 0; }