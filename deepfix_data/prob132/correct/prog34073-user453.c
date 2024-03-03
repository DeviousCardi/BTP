#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int count[n];
    for(i=0;i<n;i++)
    count[i]=0;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++) {
      if(a[i]==a[j])
      count[i]=count[i]+1; }
    int flag=0;
    for(i=0;i<n;i++) {
        if(count[i]!=a[i])
        flag=1; }
    if(flag==0)
    printf("Yes");
    else
    printf("No");
    return 0; }