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
    int a,count=0;
    a=getchar();
    for(int i=0;a!= EOF;i++)
    {arr[i]=a;count++;
    a=getchar();}
    putchar(arr[2]);
    return 0; }