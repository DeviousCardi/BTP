#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int z[2*n];
for(int i=0;i<2*n;i++) {
    scanf("%d",&z[i]); }
int d[n];
for(int j=0;j<n;j++) {
    for(int k=1;k<n;k++) {
        if(z[j]==z[k])
        d[j]=abs(k-j); } }
int min=d[0];
for(int h=0;h<n;h++) {
    if(min>d[h]) {
        min=d[h]; } }
printf("%d",min);
    return 0; }