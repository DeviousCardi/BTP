#include <stdio.h>
int halfsum;
int equal_sum(int start,int n,int a[],int sum){
    if(start<n){
    if(sum>halfsum)
    return 0;
    if(sum==halfsum)
    return 1;
    else return equal_sum(start+1,n,a,sum+a[start])||equal_sum(start+1,n,a,sum);}
    else return 0; }
int main() {
    int n,i,res;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int sum=0;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    halfsum=sum/2;
    res=equal_sum(0,n,a,0);
    if(sum%2!=0)
    printf("NO");
    else if(res==1)
    printf("YES");
    else printf("NO");
    return 0; }