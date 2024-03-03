#include <stdio.h>
int main() {
    int N,S,i,a[1000000];
    scanf("%d %d",&N,&S);
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    if(N%2==0)
    printf("YES");
    else
    printf("NO");
    return 0; }