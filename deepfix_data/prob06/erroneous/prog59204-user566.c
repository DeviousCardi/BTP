#include <stdio.h>
#include <stdlib.h>
int main() {
     int n,m,x,y,i,j;
     int ar1[100],ar2[100];
     int ct=0;
     scanf("%d %d %d %d\n",&n,&m,&x,&y);
     for(i=0;i<n;i++)
         scanf("%d\n",&ar1[i]);
     for(j=0;j<m;j++)
         scanf("%d\n",&ar2[j]);
     for(i=0,j=0;j<m && i<n;i++) {
         if(ar1[i]-x<=ar2[j] && ar2[j]<=ar1[i]+y) {
             ct++;
             j++; }
         else if(ar2[j]<ar1[i]-x) {
             j++;
             i--; } }
     printf("%d\n",ct);
     for(i=0,j=0;i<n&&j<m;i++) {
         if (ar2[j]>=ar1[i]-x&&ar1[i]+y>=ar2[j]) {
             printf("%d %d\n",i+1,j+1);
             j++; }
         else if (ar1[i]-x>ar2[j]) {
         j++;i--; } }
     return 0;