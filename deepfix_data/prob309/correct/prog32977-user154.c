#include <stdio.h>
int main()
{ int n,i,j,o;
   int max;
  int flag=0;
    scanf("%d\n",&n);
  int a[n];
  for (i=0;i<n;i++) {
    scanf("%d,",&a[i]); }
  max=a[0];
    for(i=0;i<n;i++) {
      if (a[i]>max)
      max=a[i]; }
  if (max>n)
  o=max;
  else
  o=n;
  int c[o];
  for(i=0;i<o;i++)
     c[i]=0;
  for(i=0;i<n;i++)
  {   int t=0;
      for(j=i+1;j<n;j++) {
          if(a[j]==a[i])
          t++; }
    if(t>c[a[i]-1])
    c[a[i]-1]=t;
    if ((c[a[i]-1]+1)==a[i]) {
        flag=1;
        continue; }
    else {
        printf("No");
        break; } }
 if(flag==1)
 printf("Yes");
 return 0; }