#include <stdio.h>
void check(int[],int);
int n;
int main() {
    int i;
    scanf("%d",&n);
    printf("%d",n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    check(arr,0);
    return 0; }
void check(int arr[],int m) {
    int i,s1=0,s2=0;
    if(m==n) {
        printf("NO");
        return; }
    for(i=0;i<=m;i++)
        s1=s1+arr[i];
    for(i=m+1;m<n;i++)
        s2=s2+arr[i];
    if(s1==s2) {
        printf("YES");
        return; }
    check(arr,m+1); }