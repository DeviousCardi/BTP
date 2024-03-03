#include <stdio.h>
int fun(int n,int sum1,int s,int a[n],int index) {
    if(index==n) {
        return sum1==s; }
    return fun(n,sum1+a[index],s,a,index+1)||fun(n,sum1,s,a,index+1); }
int main() {
    int n,s,j=0,d=0,index=0,sum1=0;
    scanf("%d%d",&n,&s);
    int arr[n];
    for(int i=0;i<n;i=i+1) {
        int b;
        scanf("%d",&b); }
    d=fun(n,sum1,s,arr,index);
    if(d==1)
    printf("YES");
    else
    printf("NO");
    return 0; }