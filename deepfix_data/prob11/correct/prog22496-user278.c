#include <stdio.h>
int N,S;
int check(int a[],int n,int s1) {
    printf("%d",s1);
    if(n==N) {
        return (s1==S); }
    return check(a,n+1,s1+a[n])||check(a,n+1,s1); }
int main() {
    int S;
    scanf("%d %d",&N,&S);
    int a[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    if(S==0) {
        for(int i=0;i<N;i++) {
            if(S==a[i]) {
                printf("YES");
                break; } } }
    int b=check(a,0,0);
    if(b==1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }