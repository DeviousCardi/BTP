#include<stdio.h>
int b=0;
int product(int *num[],int n) {
  static int a=1;
    if(b==n)
        return a;
    return a*product(++*num[],n); }
int main() {
    long int n,a=1;
    scanf("%d",&n);
    int  num[n];
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    a=product(*n);
    printf("%d",a);
    return 0; }