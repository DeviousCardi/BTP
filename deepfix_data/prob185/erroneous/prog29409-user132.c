#include <stdio.h>
int fun(int j,int sum1,int s,int a[j],int index) {
    if(index==j) {
        return sum1==s; }
    return fun(j,sum1+a[index],s,a,index+1)||fun(j,sum1,s,a,index+1) }
int main() {
    int n,s,j=0,d=0,index=0,sum1=0;
    scanf("%d%d",&n,&s);
    int arr[n];
    for(int i=0;i<n;i=i+1) {
        int b;
        scanf("%d",&b;)
        if(b<=s) {
            arr[j]=n;
            j=j+1; } }
    d=fun(j,sum1,s,arr,index)
    if(d==1)
    printf("YES");
    else
    printf("NO");
    return 0; }