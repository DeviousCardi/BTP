#include <stdio.h>
int main() {
int n,c;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++) {
scanf("%d ",&a[i]); }
for(int j=0;j<n;j++) {
for(int k=0;k<n;k++) {
if((a[j]==a[k])&&(j!=k)) {
printf("YES");
c=1;
break; } }
if(c==1)
break; }
return 0; }