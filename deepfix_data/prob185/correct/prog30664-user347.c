#include <stdio.h>
int n,s,count;
int findsum(int b[]) {
    int sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+b[i]; }
    if(sum==s)
    {printf("YES");
    count=1;}
    return(sum==s); }
int check(int a[],int b[],int i,int d) {
    if(i==n-1)
    return findsum(b);
    b[i]=d;
    return check(a,b,i+1,0);
    return check(a,b,i+1,a[i+1]); }
int main() {
    count=0;
    scanf("%d %d",&n,&s);
    int a[n+1];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int b[n];
        check(a,b,0,0);
        check(a,b,0,a[0]);
    if(count==0)
    printf("NO");
    return 0; }