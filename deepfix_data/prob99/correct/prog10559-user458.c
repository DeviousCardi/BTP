#include<stdio.h>
int main()
{int n ,count=1;
scanf("%d\n",&n);
int a[n],b[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]); }
 for(int i=0;i<n;i++){
     int k=a[i];
     for(int j=i+1;j<n;j++){
         if(a[j]>a[i]){
             a[i]=a[j];
             count++; } }
     a[i]=k;
     b[i]=count;
     count=1; }
 for(int i=0;i<n;i++){
printf("%d",b[i]); }
 int max;
 max=b[0];
 for(int i=1;i<n;i++){
     if(b[i]>max){
         max=b[i]; } }
    printf("%d",max);
    return 0; }