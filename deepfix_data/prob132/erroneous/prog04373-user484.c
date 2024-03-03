#include <stdio.h>
int main() {
  int n, a[100],count=0,tmp=0;
  scanf("%d",&n);
  for(i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
  for(i=0;i<n,i++) {
    for(j=i+1;j<n;j++) {
            if(a[i]==a[j])
                count++; }
    if (count==a[i])
        tmp++; }
        if(tmp>0)
            printf("Yes");
        else
            printf("No");
    return 0; }