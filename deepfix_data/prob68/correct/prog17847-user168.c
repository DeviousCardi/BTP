#include<stdio.h>
#define MAX 10000
 int product(int a[],int n,int start,int p);
int main() {
    long n,a[MAX];
    int i;
    scanf("%ld",&n);
    for(int i=0;i<n;i++) {
        scanf("%ld",&a[i]);
    }for(i=0;i<n;i++) {
        printf("%ld\n",product(a,n,i,a[i]*1)); }
    return 0;}
int product(int a[],int n,int start,int p)
{p=a[0];
    if(n==0)
    return 0;
    else if(n==1)
    return a[start];
    else
    return(a,n,start+1,p*a[start]); }