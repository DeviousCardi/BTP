#include <stdio.h>
#include <stdlib.h>
int main() {
     int i,j=0,a[100],b[100],x,y,m,n;
     scanf("%d %d %d %d",&n,&m,&x,&y);
     for(i=0;i<n;i++){
         scanf("%d ",&a[i]); }
     for(j=0;j<m;j++){
         scanf("%d ",&b[j]); }
     for(i=0;i<n;i++){
         printf("%d ",a[i]);
       while(j<m){
           printf("%d ",b[i]);
          if(b[j]>=a[i]-x||b[j]<=a[i]+y){
             j++;
             break; }
          j++; } }
	return 0; }