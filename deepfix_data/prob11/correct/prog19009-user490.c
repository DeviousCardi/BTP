#include <stdio.h>
int a[1000];
int count=0;
int sum(int N, int S) {
    for(int k=N-2;k!=-1;k--) {
       if(a[N-1]+a[k]==S) {
           count=count+1;
            break; } }
    if(count>0)
    return count;
    else
    return sum(N-1, S); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int c=0;
    c=sum(n,s);
    if(c>0)
    printf("YES");
    else
    printf("NO");
    return 0; }