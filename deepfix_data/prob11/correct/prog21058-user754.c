#include <stdio.h>
void fn(int [],int,long,long,int);
int main() {
    int N,i,f=0;long S;
    int a[30];
    scanf("%d %ld",&N,&S);
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    fn(a,N,S,0,0);
    return 0; }
void fn(int a[],int n,long s,long sum,int i) {
    if(sum==s) {
        printf("YES");
        return; }
    if(i==n&&sum!=s) {
    printf("NO");
        return; }
        fn(a,n,s,a[i]+sum,i+1);
        fn(a,n,s,sum,i+1); }