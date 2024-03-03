#include <stdio.h>
int sum1=0;
void sum(int a[],int i,int n,int s) {
    if(i==n) {
        printf("NO");
        return; }
    sum1=sum1+a[i];
    if(sum1==s)printf("YES");
    else ()
    sum(a[],i+1,n,s);
    sum1=sum1+0;
    if(sum1==s)printf("YES");
    else ()
    sum(a[],i+1,n,s);
    return; }
int main() {
   int n;
   scanf("%d",&n);
   int a[n];
   int sum=0;
   for(int i=0;i<n;i++) {
   scanf("%d",&a[i]);
    sum=sum+a[i]; }
    int i=0;
    if(sum%2!=0)printf("NO");
    else() {
        sum(a[],i,n,sum); }
    return 0; }