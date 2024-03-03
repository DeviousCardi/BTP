#include <stdio.h>
#include <stdlib.h>
int main() {
     int i,j=0,a[100],b[100],x,y,m,n,k=0,p=0;
     scanf("%d %d %d %d",&n,&m,&x,&y);
     for(i=0;i<n;i++){
         scanf("%d",&a[i]);
      for(j=p;j<m;j++){
          scanf("%d",&b[j]);
          if(a[i]-x<=b[j]&&b[j]<=a[i]+y){
              k=k+1;
              printf("%d\n",k);
              printf("%d %d",(i+1),(j+1));
              p=j+1;
              break; } } }
	return 0; }