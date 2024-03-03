#include <stdio.h>
int main() {
    int n,l,i,j,k,ch=0;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++) {
        scanf("%d",&p[i]); }
    for(j=0;j<n;j++) {
        for(k=0;k<n;k++) {
            if(p[k]>p[k+1]) {
                ch=p[k];
                p[k+1]=p[k];
                p[k]=p[k+1]; } } }
    for(l=0;l<n;l++) {
        printf("%d ",p[l]); }
    printf("end");
    return 0; }