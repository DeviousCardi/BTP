#include<stdio.h>
int subtraction(int n){
    int i,x,y;
    int a[n];
    for(i=0;i<n;i++){
        x=a[i];
        y=x-a[i+1];
        return(y); } }
int main()
{  int i,n;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
       scanf("%d",a[i]); }
    printf("%d",subtraction(n));
    return 0; }