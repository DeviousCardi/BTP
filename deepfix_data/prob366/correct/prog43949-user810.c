#include <stdio.h>
int main() {
int  n,i,dist=0,j;
int c[4000];
scanf("%d",&n); int min=2*n+3;
for(i=0;i<2*n;i++) {
        scanf("%d",&c[i]); }
for(i=0;i<n;i++) {
        for(j=i+1;j<2*n;j++) {
                if(c[i]==c[j]&&j>i) {
                  dist=j-i;
                   if(dist<min)
                       min=dist; } } }
if(n==0)
min=0;
printf("%d",min);
    return 0; }