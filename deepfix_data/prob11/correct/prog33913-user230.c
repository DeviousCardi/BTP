#include <stdio.h>
int find(int a[],int sum1,int sum2,int s,int i, int size) {
    if(i==size)
        return 0;
    if(sum1==s ||sum2==s) {
        return 1; }
    return find(a,sum1+a[i],sum1,s,i+1,size)||find(a,sum2+a[i],sum2,s,i+1,size); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",a[i]); }
    int p;
    if(find(a,0,0,s,0,n))
        printf("YES");
    else
        printf("NO");
    return 0; }