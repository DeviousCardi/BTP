#include <stdio.h>
#include <stdlib.h>
int main() {
      int n,m;
      scanf("%d",&n);
      scanf("%d",&m);
      long int x,y;
      scanf("%ld",&x);
      scanf("%ld",&y);
      int*a,*b;
      int i,j,t=0;
      a=(int*)malloc(n*sizeof(int));
      for(i=0;i<n;i++) {
          scanf("%d",&*(a+i)); }
       b=(int*)malloc(m*sizeof(int));
      for(j=0;j<m;j++) {
          scanf("%d",&*(b+j)); }
      int k=0;
      for(j=0;j<m;j++) {
          for(i=0;i<n;i++) {
              if(a[i]-x<=b[j] && b[j]<=a[i]+y)
              k++; } }
      printf("%d",k);
      printf("\n");
      for(i=1;i<=n;i++) {
          for(j=t;j<=m;j++) {
              if(b[i]-x<=a[j]&&a[j]<b[i]+y)
              t=j+1;
              printf("%d %d\n",j+1,i+1); } }
	return 0; }