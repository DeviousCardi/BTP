#include <stdio.h>
int n,s,count;
int findsum(int b[]) {
    int sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+b[i];
        printf("%d ",b[i]); }
    printf("\n");
    if(sum==s)
    {printf("YES");
    count=1;}
    return(sum==s); }
check(int a[],int b[],int i,int d) {
     b[i]=d;
    if(i==n-1)
    return findsum(b);
    check(a,b,i+1,0);
    check(a,b,i+1,a[i]); }
int main() {
    count=0;
    scanf("%d %d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int b[n];
    check(a,b,0,0);
    check(a,b,0,a[0]);
    if(count==0)
    printf("NO");
    return 0; }