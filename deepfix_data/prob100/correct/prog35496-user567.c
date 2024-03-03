#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,k;
    scanf("%d%d",&n,&m);
    int num[m],a[n];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[j]); }
                num[i]=a[0];
        for(j=1;j<n;j++) {
            if(num[i]<a[j]) {
                num[i]=a[j]; } } }
    int ch=num[0];
    for(k=1;k<m;k++) {
        if(ch>num[k])
        ch=num[k]; }
    printf("%d",ch);
    return 0; }