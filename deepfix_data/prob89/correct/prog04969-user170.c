#include <stdio.h>
int main(){
    int n,i,l,k,j,d=0;
    scanf("%d",&k);
    scanf("%d",&n);
    int a[n];
    for(l=0;l<n;l++) {
        scanf(" %d",&a[l]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if((a[i]+a[j])==k&&i!=j) {
                printf("lucky");
                d=1;
                break; } }
        if(d==1) {
            break; } }
    if(d==0) {
        printf("unlucky"); }
    return 0; }