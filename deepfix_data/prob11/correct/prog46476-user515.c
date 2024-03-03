#include <stdio.h>
long int s=0;
long int a[30];
int recurse(int N,long int S,long int ar[30]) {
    if(s==S)
        return s;
    if(N==1) {
        s=ar[0]; }
    if(N==0)
        return 0;
    s=s+ar[N]+recurse(N-1,S,ar); }
int main() {
    int n;
    long int S1;
    scanf("%d %ld",&n,&S1);
    for(int i=0;i<n;i++) {
        scanf("%ld ",&a[i]); }
    int check=recurse(n,S1,a);
    if(check==0)
        printf("NO");
    else
        printf("YES");
    return 0; }