#include <stdio.h>
void kd(int a[],int n,int s,int o,int r) {
    int j,p=0;
    for(j=0;j<s;j++) {
        p=p+a[j]; }
    if(r%2!=0) {
        printf("NO");
        return; }
    if(p==o) {
        printf("YES");
        return; }
    if(s==n) {
        printf("NO");
        return; }
    kd(a,n,s+1,o,r); }
int main() {
    int n,i,a[1000],s=0,p;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
    scanf("%d ",&a[i]);
    s=s+a[i]; }
    p=s/2;
    kd(a,n,0,p,s);
    return 0; }