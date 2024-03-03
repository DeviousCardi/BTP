#include <stdio.h>
int sum(int a[],int n,int j) {
    int s=0;
    if(j<n) {
    for(int i=j;i<n;i++) {
        s+=a[i]; } }
    return s; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int count=0;
    for(int i=0;i<n-1;i++) {
        int l=0;
        int m=0;
        l=sum(a,i+1,0);
        m=sum(a,n,i+1);
        if(l==m) {
            printf("YES");
            break; }
        else{
            count+=1; } }
    if(count==n-1) {
        printf("NO"); }
    return 0; }