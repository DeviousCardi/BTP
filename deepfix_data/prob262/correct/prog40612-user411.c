#include<stdio.h>
#include<strings.h>
int swap(int ,int ,int);
int main() {
    int reuselt;
    int n;
   scanf("%d",&n);
   int i;
    int a[1000];
   for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
    reuselt= (swap(a[i] ,a[n-1] ,n));
   printf("%d",reuselt);
    return 0; }
int swap(int a ,int b ,int n) {
    int temp;
    if(n==1)
    return 0;
    else {
      if(n>1)
      temp=a;
      a=b;
      b=temp; } }