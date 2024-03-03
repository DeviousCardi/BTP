#include<stdio.h>
#include<strings.h>
int swap(int ,int ,int);
int main() {
    int result;
    int n;
   ((n>=1)&&(n<=10^9));
   scanf("%d",&n);
   int i;
    int a[i];
    ((a[i]>=-10^9)&&(a[i]<=10^9));
   for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
    result= swap(a[i] ,a[n-1] ,n);
   printf("%d",&result);
    return 0; }
int i=0;
int swap(int a[i] ,int a[n-1] ,n) {
    if(n==1)
    return;
    else
    return swap(a[i+1] ,a[n-2] ,n); }
int swap(int p ,q) {
    int temp;
    temp=p;
    p=q;
    q=temp;
    return 0; }