#include <stdio.h>
int sum1=0;
void sum(int a[],int i,int n,int s) {
    if(i==n) {
        printf("%d",i);
        printf("NO\n");
        return; }
    sum1=sum1+a[i];
    if(sum1==s)printf("YES");
if(sum1!=s)sum(a,i+1,n,s);printf("%d",i);
    sum1=sum1+0;
    if(sum1==s)printf("YES");
    if(sum1!=s)sum(a,i+1,n,s);printf("%d",i);
    return; }
int main() {
   int n;
   scanf("%d",&n);
   int a[n];
   int sum2=0;
   for(int i=0;i<n;i++) {
   scanf("%d",&a[i]);
    sum2=sum2+a[i]; }
    int i=0;
    if(sum2%2!=0)printf("NO");
    if(sum2%2==0) {
        sum(a,i,n,sum); }
    return 0; }