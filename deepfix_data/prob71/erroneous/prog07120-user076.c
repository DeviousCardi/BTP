#include <stdio.h>
int main() {
   int i,n,a[100000],p,j,temp;
   scanf("%d\n",&n);
   for(i=0;i<n;i++) {
       scanf("%d ",&a[i]); }
   for(i=0;i<n;i++)
   {for(j=0;j<n;j++) {
    if(a[j]>a[i]) {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp; } } }
   if(n%2!=0) {
       p=(n+1)/2;
       printf("%d",a[p-1]); }
   else
   {float s;
     p=(n/2);
     q=(n/2)+1;
     s=(a[p-1]+a[q-1])*1.0/2;
     printf("%.1f",s); }
    return 0; }