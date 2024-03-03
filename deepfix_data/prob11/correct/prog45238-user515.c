#include <stdio.h>
long int s=0;
long int a[30];
int recurse(int N,long int S,long int ar[30]) {
    if(s==0)
        return 1;
    if(N==0)
        return 0;
    return recurse(N,S,ar)||recurse(N-1,S-ar[N-1],ar); }
int main() {
    int n;
    long int S1;
    scanf("%d %ld",&n,&S1);
    for(int i=0;i<n;i++) {
        scanf("%ld ",&a[i]); }
    int check=recurse(n,S1,a);
    if(check==1)
        printf("YES");
    else
        printf("NO");
    return 0; }