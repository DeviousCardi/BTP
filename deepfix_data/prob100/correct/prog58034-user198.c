#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,k=0,min=0,s[1000],p[1000],max=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",s[k]);
            k++;
            if(min>s[k]) {
                min=s[k]; } }
        p[i]=min; }
    min=p[0];
    for(i=0,j=0;i<m;i++) {
        if(min>p[i])
        j++; }
    for(i=n*j;i<n*j+n;i++) {
        if(s[i]>max) {
            max=s[i]; } }
    printf("%d",max);
    return 0; }