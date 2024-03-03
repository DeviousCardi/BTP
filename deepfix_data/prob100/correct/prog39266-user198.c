#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,k=0,s[1000],max=0,p=90000;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&s[k]);
            k++; }
        for(j=k-j*(i-1);j<k;j++) {
            if(max<s[k]) {
                max=s[k]; } }
        if(p>max) {
            p=max; } }
    printf("%d",p);
    return 0; }