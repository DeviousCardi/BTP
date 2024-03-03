#include<stdio.h>
#include<limits.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<m;i++)
    {for(int j=0;j<n;j++){
     scanf("%d",&a[j]); }
     int max=a[0];
     for(int k=0;k<n;k++){
     if(max>a[j])
     max = a[j]; }
     int c[i]= max; }
    int min=c[0];
     for(int k=0;k<n;k++){
     if(min>c[j])
     min = c[j]; }
     printf("%d",min);
    return 0; }