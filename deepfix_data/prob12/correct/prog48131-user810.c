#include <stdio.h>
int main() {
int  n,i,min=2,dist=0,j;
int c[400];
int  a[400];
scanf("%d",&n);
for(i=0;i<2*n;i++) {
        scanf("%d",&c[i]); }
for(i=0;i<2*n;i++) {
        for(j=0;j<2*n;j++) {
                if(c[i]==c[j]) {
                    if(i>j) {
                        dist=i-j; }
                    else {
                        dist=j-i; } } }
        if(dist<min) {
            min=dist; } }
printf("%d",min);
    return 0; }