#include<stdio.h>
int i=0;
int sum(int n,int a[],int total) {
        i++;
        total=total+a[i];
        if(i=n-1)
        return total;
        else
        return sum(n,a,total); }
int main()
{  int n;
    scanf("%d",&n);
    total=sum(n,a[])
    return 0; }