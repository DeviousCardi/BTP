#include <stdio.h>
int search(int a[],int n,int start,int end,int s,int c) {
    int i,sum=0,j,m;
    if(start+c==end) {
        m++; }
    for(j=0;j<m;j++)
    sum=sum+a[start+j]+a[end];
    if(start==end)
    {c++;
        sum=a[start]+a[start+c]+a[end]; }
    if(c==0)
    sum=a[start]+a[end];
    if(n==1) {
            if(a[n-1]==s)
            return 1; }
        if(sum==s)
        return 1;
        else
       return  search(a,n,start,end-1,s,c); }
int main() {
    int n,i;
    long int s;
    scanf("%d %ld\n",&n,&s);
    long int a[n+1];
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    if(search(a[n+1],n,0,n,s,0)==1)
    printf("YES");
    else
    printf("NO");
    return 0; }