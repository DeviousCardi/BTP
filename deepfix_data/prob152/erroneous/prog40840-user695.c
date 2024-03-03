#include <stdio.h>
int fn(int n,int arr[]) {
    int sum;
    if(n!=0&&)
    sum=arr[n]+fn(n-1,arr);
    return sum;
    else
    return 0; }
int main() {
    int n,arr[30],var;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    var=fn(n,arr);
    if(var/2==0)
    printf("YES");
    else
    printf("NO");
    return 0; }