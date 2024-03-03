#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int sum1=0;
    int i;
    for(i=1;i<=n/2;i++)
    sum1=sum1+n;
    n--;
    printf("%d",sum1);
   int sum2=0;
   for(int i=(n/2)+1;i<=n;i++)
   sum2=sum2+n;
   n--;
   printf("%d",sum2);
    if(sum1==sum2) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }