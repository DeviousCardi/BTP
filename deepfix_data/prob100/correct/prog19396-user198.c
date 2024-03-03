#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,k=-1000,s[1000],max=0,p,a;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++) {
        for(j=0,k=-1000;j<n;j++) {
            scanf("%d",&a);
            if(k<a) {
                k=a; } }
        s[i]=k; }
    for(i=0;i<m;i++) {
        if(s[0]>=s[i])
        p=s[i]; }
    printf("%d",p);
    return 0; }