#include <stdio.h>
int main() {
    int N,i,f=0;long S;
    int a[30];
    scanf("%d %ld",&N,&S);
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<=N;i++) {
        f+=find(a,N,i,S,0); }
    if(f==0)
        printf("NO");
    else
        printf("YES");
    return 0; }
int find(int a[],int n,int i,long s,int sum) {
    if(sum==s)
    return 1; }