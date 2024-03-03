#include<stdio.h>
#include<strings.h>
int swap(int a,int b) {
    int temp;
    temp=a;
    a=b;
    b=temp; }
int main() {
    int n,reu;
   scanf("%d",&n);
   int i;
    int a[1000];
   for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
      if(n<0)
      return 0;
       else
      reu= swap(a[i],a[n-1-i]);
      printf("%d",reu);
    return 0; }