#include <stdio.h>
#include <stdlib.h>
int main() {
     int i,j,a[100],b[100],x,y,m,n;
     scanf("%d %d %d %d",&m,&n,&x,&y);
     for(i=0;i<m;i++){
      for(j=0;j<n;j++){
          if(a[i]-x<=b[j]&&b[j]<=a[i]+y){
              printf("%d %d\n",(i+1),(j+1)); } } }
	return 0; }