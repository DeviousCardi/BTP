#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int c=n;
    int sum=0;
    int count=2016;
    while(n>0)
    {sum=sum+n%10;
    n=n/10;}
    for(int i=2016;i%sum!=0;i++)
    {count++;}
    printf("%d",count);
    return 0; }