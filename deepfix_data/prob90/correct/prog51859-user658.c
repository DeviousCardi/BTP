#include <stdio.h>
int main(){
    int l[1000],k,n,i,f=0;
    int a[500];
    for(i=0;i<500;i++) {
    a[i]=0; }
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
    scanf("%d",&l[i]); }
    for(i=0;i<n;i++) {
    a[l[i]]++; }
    for(i=0;i<k;i++) {
        if(i<500&&(k-i)<500) {
            if(a[i]!=0&&a[k-i]!=0) {
                f=1;
                break; } } }
    if(f)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }