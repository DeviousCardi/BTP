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
          if((a[j]==a[i])&&(j!=i))
              c[a[i]-1]++;
          else
              c[a[i]-1]=1; }
    if (c[a[i]-1]==a[i]) {
        flag=1;
        continue; }
    else {
        printf("No");
        break; } }
 if(flag==1)
 printf("Yes");
 return 0; }