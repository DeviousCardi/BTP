#include <stdio.h>
#include <stdlib.h>
int q=0;
int max(int a,int b,int c){
    if (a>b) {
        if(a>c){
        q=a; } }
    return a; }
int main() {
	int n,t,i,j,q,count,a[20];
    scanf("%d",&n);
      for(i=0;i<n;i++) {
	  scanf("%d",&a[i]);
	  printf("%d",a[i]); }
      scanf("%d",&t);
      for(j=1;j<=t;j++) {
          scanf("%d",&count);
          if( a[count]==max (a[count],a[count-1],a[count+1]) )
          printf("Yes");
          else
          printf("No"); }
      printf("%d",q);
	return 0; }