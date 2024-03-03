#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,k=0,min,s[1000],p[1000],max=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&s[k]);
            k++;
            max=s[0];
            if(s[j]>max) {
            max=s[j]; } }
        p[i]=max;
        printf("%d",max); }
    return 0; }