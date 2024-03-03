#include<stdio.h>
long long int product(int a[],int start,int end);
long long int p=1;
int main() {
    int n;
    scanf("%d\n",&n);
    int i=0,a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
 long long int  pr=product(a,0,n-1);
  printf("%lld",p);
    return 0; }
long long int product(int a[],int start,int end) {
    if(start>end)
    return p;
    else {
    p=p*a[start]; }
 product(a,start+1,end); }