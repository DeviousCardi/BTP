#include <stdio.h>
int find(int start,int end,int a[], int sum)
{if(start>end)
return 0;
if(start==0) {
    if(a[start]==sum)
    return 1;
    else
    return find(start+1,end,a,sum); }
else if(a[start]==sum)
return 1;
 else
 return find(start+1,end,a,sum)||find(start+1,end,a,sum-a[start]); }
int main() {
    int n,i,sum=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
    scanf("%d ",&a[i]);
    sum=sum+a[i]; }
    int  r=find(0,n-1,a,sum/2);
    if(r==1)
    printf("YES");
    if(r==0)
    printf("NO");
    return 0; }