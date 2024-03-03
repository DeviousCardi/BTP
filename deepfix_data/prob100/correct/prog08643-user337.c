#include<stdio.h>
#include<limits.h>
int main()
{   int m,n,max,min;
    scanf("%d%d",&m,&n);
    int r_max[n];
    int j,i;
    for(j=0;j<n;j++) {
       int r[m];
       for(i=0;i<m;i++) {
        scanf("%d",&r[i]); }
    max=r[0];
          for(i=1;i<m;i++) {
               if(max<r[i])
               max=r[i]; }
    r_max[j]=max; }
     int k;
     for(k=1;k<n;k++) {
         min=r_max[0];
         if(min>r_max[k])
         min=r_max[k]; }
     printf("%d ",min);
     for(i=0;i<n;i++) {
         printf("%d  ",r_max[i]); }
    return 0; }