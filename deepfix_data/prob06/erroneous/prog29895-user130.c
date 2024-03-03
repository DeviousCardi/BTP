#include <stdio.h>
#include <stdlib.h>
int main() {int n,m,x,y;int a[100],b[100];int i;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&x);
    scanf("%d\n",&y);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
   }printf("\n");
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]);
    }int c1=0,c2=0,c3=0;
  while(c1!=n||c2!=m) {
      if(a[c1]-x)<=b[c2]&&b[c2]<=a[c1]+y)
      {c3++;
      printf("%d %d",(c1+1),(c2+1));c1++;c2++;}
      else if(b[c2]<a[c1]-x)
      {c2++;
  }else {
      c1++;
  }}
	return 0; }