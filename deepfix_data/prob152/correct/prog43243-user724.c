#include <stdio.h>
int search(int a[],int n,int s) {
    if(n==0)
    return 0;
    if(s==0)
    return 1;
    return(search(a,n-1,s-a[n])||search(a,n-1,s)); }
int main() {
    int a[100],n,i,p,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum=sum+a[i]; }
      p=search(a,n,sum/2);
  if(n=1)
  printf("YES");
  else printf("NO");
    return 0; }