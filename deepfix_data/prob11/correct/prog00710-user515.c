#include <stdio.h>
long int s=0;
long int a[30];
int recurse(int N,long int S,long int ar[30]) {
    if(s==S)
        return 0;
    if(N==0)
        return -1;
    if(N==1) {
        for(int i=0;i<N;i++) {
            if(S==ar[i]) {
                s=a[i];
                return 0; }
            return s; } }
    for(int j=0;j<N;j++) {
        s=s+ar[j]+recurse(N-1,S,ar); }
    if(s==S)
        return 0;
    else
        return s; }
int main() {
    int n;
    long int S1;
    scanf("%d %ld",&n,&S1);
    for(int i=0;i<n;i++) {
        scanf("%ld ",&a[i]); }
    int check=recurse(n,S1,a);
    if(check==0)
        printf("YES");
    else
        printf("NO");
    return 0; }