#include <stdio.h>
void func(int arr[],int n) {
    int i,sum=0;
    for(i=0;i<n;i++)  sum=sum+arr[i];
    if(sum%2==0)  printf("YES");
    else printf("NO");
    return; }
int main() {
    int n;
        scanf("%d",&n);
    int i, num[n];
        for(i=0;i<n;i++)  scanf("%d",&num[i]);
      func(num,n);
    return 0; }