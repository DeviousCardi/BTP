#include <stdio.h>
int search(int a[],int start,int n,int sum){
    if(start==n)
        return 0;
    if(a[start]==sum)
        return 1;
    return search(a,start+1,n,sum)|| search(a,start+1,n,sum-a[start]); }
int main() {
    int n,i,a[30],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    if(sum%2==1){
        printf("NO");
        return 0; }
    sum=sum/2;
    if(search(a,0,n,sum))
        printf("YES");
    else
        printf("NO");
    return 0; }