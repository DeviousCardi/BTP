#include<stdio.h>
#include<limits.h>
int main()
{   int m,n;
    scanf("%d%d",&m,&n);
    int r_max[n];
    int j,i;
    for(j=0;j<n;j++) {
       int r[m];
       for(i=0;i<m;i++) {
        scanf("%d",&r[i]); }
          for(i=0;i<m;i++) {
               int max=r[0];
               if(max<r[i])
               max=r[i]; }
    r_max[j]=max; }
     for(j=1;j<n;j++) {
         int min=r_max[0];
         if(min>r_max[j])
         min=r_max[j]; }
     printf("%d",min);
    return 0; }