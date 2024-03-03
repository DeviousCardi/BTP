#include<stdio.h>
#include<limits.h>
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int max=-1000007,a;
    int min=1000007;
    for(int j=0;j<n;j++)
    {max=-1000007;
    for (int i=0;i<m;i++) {
        scanf("%d",&a);
        if(a>max)
        max=a; }
    if(min>max)
    min=max; }
    printf("%d",min);
    return 0; }