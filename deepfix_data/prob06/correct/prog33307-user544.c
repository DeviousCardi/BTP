#include <stdio.h>
#include <stdlib.h>
int main() {
     int i,j,a[100],b[100],x,y,m,n,p=0;
     scanf("%d %d %d %d",&n,&m,&x,&y);
     scanf("%d ",&a[100]);
     for(i=0;i<n;i++){
         scanf("%d ",&a[i]);
      for(j=p;j<m;j++){
          scanf("%d ",&b[j]);
          if(b[j]>=a[i]-x&&b[j]<=a[i]+y){
              p=j+1;
              printf("%d %d\n",(i+1),p);
              break; } } }
	return 0; }