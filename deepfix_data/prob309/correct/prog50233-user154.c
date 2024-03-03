#include <stdio.h>
int main()
{ int n,i,j;
  int flag=0;
    scanf("%d\n",&n);
  int a[n], c[n];
  for (i=0;i<n;i++) {
    scanf("%d,",&a[i]);
    c[i]=0; }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if(a[j]==a[i]) {
              c[a[i]-1]++;
              printf("%d %d  %d\n",i,a[i]-1,c[a[i]-1]); } }
    if (c[a[i]-1]==a[i]) {
        flag=1;
        continue; }
    else {
        printf("No");
        break; } }
 if(flag==1)
 printf("Yes");
 return 0; }