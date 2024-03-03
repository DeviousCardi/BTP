#include <stdio.h>
int main() {
    int n,l,i,j,k,p[10000],ch=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&p[i]); }
    for(j=0;j<n;j++) {
        for(k=0;k<n;k++) {
            if(p[j]>p[k+1]) {
                ch=p[j];
                p[k+1]=p[j];
                p[j]=p[k+1]; } } }
    for(l=0;l<n;l++) {
        printf("%d ",p[l]); }
    printf("end");
    return 0; }