#include <stdio.h>
int value_chk(int size,int s,int a[],int sum) {
    if(size==0) {
        if(sum==s)
            return 1;
        else
            return 0; }
    return (size-1,s,a+1,sum+a[0]) || (size-1,s,a+1,sum) }
int main() {
    int n,s,arr[30],i,sum=0;
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum=sum+arr[i]; }
    if(value_chk(n,s,arr,sum))
        printf("YES");
    else
        printf("NO");
    return 0; }