#include <stdio.h>
int main(){
    int a1[100];
    int a2[100];
    int n,i,j,k;
    scanf("%d %d",&a1[0],&a2[0]);
    scanf("%d",&n);
    for(i=0;i<n;i=i+1) {
        scanf("%d",&a1[i]); }
     for(j=0;j<n;j=j+1) {
        scanf("%d",&a2[j]); }
    for(k=0;k<n;k=k+1) {
         a1[a2[k]];
         printf("%d",a1[a2[k]]); }
    return 0; }