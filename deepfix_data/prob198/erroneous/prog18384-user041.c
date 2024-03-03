#include <stdio.h>
int main() {
int n1,n2,i,m=0;l=30;
scanf("%d \n"&n1);
int a[n1];
for(i=0;i<n1;i++)
scanf("%d \n"&a[i]);
scanf("%d \n"&n2);
int b[n2];
for(i=0;i<n2;i++)
scanf("%d \n"&a[i]);
for(i=0;i<(n1-1);i++) {
  if(a[i+1]<a[i])
  m=i+1;
  for(j=0;j<n2;j++) {
      if(a[m]!=b[j])
      l=m;
      else
      break; } }
if(l==30)
printf("NO");
else
printf("%d",l);
return 0; }