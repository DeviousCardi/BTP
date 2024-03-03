#include <stdio.h>
int main() {
  int n,i,j,m=0,sum=0;
  scanf("%d",&n);
  char a[2*n-1];
  int b[n];
  scanf("%s",a);
  for(i=0;i<n;i++) {
     b[i]=a[2*i]-'0'; }
int count=0;
for(i=0;i<n;i++) {
    for(j=0;j<n;i++) {
        if(a[i]==a[j]) sum=sum+1; }
    if(sum==a[i]) m=m+1;
    sum=0; }
if(m==n) printf("Yes");
else printf("No");
    return 0; }