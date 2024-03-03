#include <stdio.h>
#include <stdlib.h>
int main() {
  float x,y;
  int n,m,k=0;
  int *a,*b;
  scanf("%d %d",&n,&m);
  scanf("%d %d",&x,&y);
  int s[n],v[n];
  a=(int*)malloc(n*sizeof(int));
  b=(int*)malloc(m*sizeof(int));
  for(i=1;i<=n;i++)
   scanf("%d",(a+i));
  for(i=1;i<=m;i++)
   scanf("%d",b+i);
   i=1;j=1;
   while(i<=n&&j<=m) {
       if(a[i]-x<=b[j]&&b[j]<=a[i]+y) {
         s[k]=i;
         v[k]=j;
         k++;
         i++;
         j++; }
       else if(a[i]-x>=b[j])
          {j++;}
       else if(b[j]>=a[i]+y)
       {i++;} }
   printf("%d\n",j-1);
   for(i=0;i<k;i++)
     printf("%d %d\n",s[i],v[i]);
	return 0; }