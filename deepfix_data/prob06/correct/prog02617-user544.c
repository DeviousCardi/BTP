#include <stdio.h>
#include <stdlib.h>
int main() {
     int i,j=0,a[100],b[100],x,y,m,n;
     scanf("%d %d %d %d",&n,&m,&x,&y);
     for(i=0;i<n;i++){
         scanf("%d ",&a[i]);
      while(j<m){
          scanf("%d ",&b[j]);
          printf("%d\n",a[i]);
          printf("%d\n",b[j]);
             j++; } }
	return 0; }