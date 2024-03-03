#include<stdio.h>
#include<strings.h>
void rev(int a[],int N) {
    if(N==1) {
        printf("%d",a[0]);
        return; }
    printf("%d ",a[N-1]);
    return rev(a,N-1); }
int main() {
    int N,i;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    rev(a,N);
    return 0; }