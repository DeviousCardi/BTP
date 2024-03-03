#include <stdio.h>
int sum(int a[],int n,int start) {
    if(start>=n) return 0;
    int s=0,i,su=0;
    for(i=0;i<=start;i++) {
        s=s+a[i]; }
    for(i=start+1;i<n;i++) {
        su=su+a[i] }
    if(s==su) return 1;
    else return sum(a,n,start+1); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    if (sum(a,n,0)==0) printf("NO");
    else printf("YES");
    return 0; }