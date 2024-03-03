#include<stdio.h>
int find(int start,int end,int a[],int sum)
{if(start=end)
return 0;
if(start==0) {
    if(a[start]==sum)
    return 1;
    else
    return find(start+1,end,a,sum); }
else if(a[start]==sum||a[start]==sum-a[start-1])
return 1;
 else
 return find(start+1,end,a,sum); }
int main() {
    int n,s,i;
    scanf("%d %d\n",&n,&s);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int r=find(0,n-1,a,s);
    if(r==1)
    printf("YES");
    if(r==0)
    printf("NO"); }