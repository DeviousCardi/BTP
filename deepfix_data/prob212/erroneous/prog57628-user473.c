#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a=0;
    int sum=0;
    while(n!=0)
    { a=n%10;
      sum=sum+a;
      n=n/10; }
    int i;
    for(i=2016;i%sum!=0;i++);
    printf("%d",i); }
    return 0; }