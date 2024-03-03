#include <stdio.h>
void equal(int half,int n,int ar[]) {
    int i;
    if(half==ar[n-1]) {
    printf("YES");
    return; }
    if(n==0) {
    printf("NO");
    return; }
    for(i=0;i<=n-1;i++) {
        equal(half-ar[n-1],n-1,ar);
        equal(half,n-2,ar); } }
int main() {
int n,i,sum=0;
scanf("%d",&n);
int ar[n];
for(i=0;i<=n-1;i++)
scanf("%d",&ar[i]);
for(i=0;i<=n-1;i++)
sum=sum+ar[i];
if(sum%2==0)
equal(sum/2,n,ar);
else
printf("NO");
    return 0; }