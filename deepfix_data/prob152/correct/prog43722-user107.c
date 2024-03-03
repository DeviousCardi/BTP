#include <stdio.h>
int find(int start,int end,long long int a[],long long int sum)
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
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    return 0; }