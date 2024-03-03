#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b; }
int main() {
	int n,t,i,j,count,a[20] ;
    scanf("%d",&n);
      for(i=0;i<n;i++) {
	  scanf("%d",&a[i]); }
      scanf("%d",&t);
      for(j=1;j<=t;j++) {
          scanf("%d",&count);
          if( a[count]==max (a[count],a[count-1]) && a[count]==max (a[count],a[count+1]) )
          printf("Yes\n");
          else
          printf("No\n"); }
	return 0; }