#include <stdio.h>
int main() {
    int n,i,b,k;
    scanf("%d\n",&n);
    int a[n];
    for (i=0;i<n;i++) {
         scanf("%d",&a[i]); }
    for(i=0;i<n;i++)
    { int flag=0;
      int count=0;
        for(int j=n-1;j>=0;j--) {
            if(a[i]==a[j]) {
                flag=flag+1; }
            if (flag==2) {
                    printf("%d\n",a[i]);
                     count=1;
                   break; } }
        if(count==1) {
                   break; } }
  int s;
  s=(n*(n+1))/2;
  int sum=0;
  for (i=0;i<n;i++) {
      sum=sum+a[i];
     k=s-sum; }
     printf("%d",k+1);
    return 0; }