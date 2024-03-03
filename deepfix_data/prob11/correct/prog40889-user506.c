#include <stdio.h>
int promotion(int N, int S, int a[]) {
    a[N-1]=a[N-1]+a[N-2];
    if(a[N-1]==S)
    return 1;
    if(N=1)
    return 0;
    else return promotion(N-1,S,a); }
int main() {
    int N, S, i, k;
    scanf("%d %d", &N, &S);
    int a[N];
    for(i=0;i<N;i++)
    scanf("%d ", &a[i]);
    k=promotion(N,S,a);
    if(k==1)
    printf("YES");
    if(k==0)
    printf("NO");
    return 0; }