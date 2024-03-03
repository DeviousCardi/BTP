#include <stdio.h>
int main() {
    int N,S,num[100],i;
    scanf("%d",&N);
    scanf("%d",&S);
    for(i=0;i<N;i++) {
        scanf("%d",&num[i]); }
    if(N%2==0)
    printf("YES");
    else
    printf("NO"); }