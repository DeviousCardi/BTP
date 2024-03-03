#include <stdio.h>
int minm (int a, int b)
{if(a>=b)
    return b;
    else return a; }
int main(){
    int n;
    scanf("%d",&n);
    scanf("\n");
    int arr[400];
    int count=0;
    for(int i=0;arr[i]!= EOF;i=i++)
    {scanf("%d",&arr[i]);
    count++; }
    printf("%d",arr[1]);
    return 0; }