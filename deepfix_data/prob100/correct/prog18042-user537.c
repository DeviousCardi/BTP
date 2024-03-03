#include<stdio.h>
#include<limits.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int c[m];
    int a[n];
    for(int i=0;i<m;i++)
    {for(int j=0;j<n;j++){
     scanf("%d",&a[j]); }
     int max=a[0];
     for(int k=0;k<n;k++){
     if(max<a[k])
     max = a[k]; }
     printf("%d\n",max);
      c[i]= max; }
    int min=c[0];
     for(int k=0;k<n;k++){
     if(min>c[k])
     min = c[k]; }
     printf("%d",min);
    return 0; }