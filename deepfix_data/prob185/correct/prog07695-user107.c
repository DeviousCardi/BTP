#include<stdio.h>
int find(int start,int end,int a[],int sum)
{int i;
if(start>end)
return 0;
for(i=start;i<end;i++) {
    if(a[i]==sum)
        return 1; }
sum=sum-a[start];
return(start+1,end,a,sum); }
int main() {
    int n,s,i;
    scanf("%d %d\n",&n,&s);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int r=find(0,n-1,a,s);
    if(r==1)
    printf("YES"); }