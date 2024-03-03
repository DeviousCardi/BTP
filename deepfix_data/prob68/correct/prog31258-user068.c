#include<stdio.h>
int product(int a[],int start,int end);
 int p=1;
int main() {
    int n;
    scanf("%d\n",&n);
    int i=0,a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
 int  pr=product(a,0,n-1);
  printf("%d",p);
    return 0; }
int product(int a[],int start,int end) {
    if(start>end)
    return p;
    else {
    p=p*a[start];
    printf("%d ",p); }
 product(a,start+1,end); }