#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,k=0,s[1000],max=0,p=90000,a;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a);
            if(k<a) {
                k=a; } }
        printf("%d",k); }
    return 0; }