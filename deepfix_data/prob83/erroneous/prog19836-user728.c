#include <stdio.h>
 void rotate(int no[])
    { int j;
     int temp=no[n-1];
      for(j=n-1;j>=0;j--) {
       no[j]=no[j-1]; }
      no[0]=temp; }
int main()
{ int n,i,l1,j,s;
  scanf("%d",&n);
    int no[n];
    for(i=0;i<n;i++) {
         scanf("%d",&no[i]); }
    scanf("%d",l1);
   for(k=0;k<l1;k++)
   {  rotate(no[n]); }
    for(s=0;s<l1;s++)
     printf("%d",no[s]);
    return 0; }