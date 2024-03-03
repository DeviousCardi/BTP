#include <stdio.h>
int main(){
int n;
int z[2*n];
scanf("%d",&n);
for(int i=0;i<2*n;i++) {
    scanf("%d",&z[i]); }
int d[n];
for(int j=0;j<n;j++) {
    for(int k=j+1;k<n;k++) {
        if(z[j]==z[k])
        d[j]=j-k; } }
int max=d[0];
for(int h=0;h<n;h++) {
    if(d[h]>max) {
        max=d[h]; } }
    return 0; }