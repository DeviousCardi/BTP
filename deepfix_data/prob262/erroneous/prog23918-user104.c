#include<stdio.h>
#include<strings.h>
void print_rev(int a[],int n)
{  if(n>=1)
    {printf("%d",a[n-1]);
    print_rev(a[],n-1);}
    return; }
int main() {
    int b,i;
    scanf("%d",&b);
    int arr[b];
    for(i=0;i<b;i++){
        scanf("%d",&arr[i]); }
    print_rev(arr[],b);
    return 0; }