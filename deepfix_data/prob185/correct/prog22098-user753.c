#include <stdio.h>
int equal(int half,int n,int ar[]) {
    int i;
    if(half==ar[n-1]) {
        return 1; }
    if(n==1) {
        return 0; }
    if(equal(half,n-1,ar)==0)
    return equal(half-ar[n-1],n-1,ar);
    else
    return 1; }
int main() {
int n,i,sum;
scanf("%d",&n);
scanf("%d",&sum);
int ar[n];
for(i=0;i<=n-1;i++)
scanf("%d",&ar[i]);
if(equal(sum,n,ar)==1)
printf("YES");
else
printf("NO");
return 0; }