#include <stdio.h>
int main() {
int h,n,a[100],i,dif=0;
scanf("%d",&h);
scanf("%d",&n);
for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
for(i=0;i<n-1;i++) {
        if(a[i+1]<a[i]) {
                dif=dif+(a[i]-a[i+1]); } }
if(h>dif) {
        printf("Yes"); }
else {
        printf("No"); }
return 0; }