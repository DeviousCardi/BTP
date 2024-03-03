#include <stdio.h>
int max(int a, int b) {
    if(a>b) return a;
    else    return b; }
void swap(int a,int b) {
    int temp;
    temp=a;
    a=b;
    b=temp; }
void sort(int a[],int start,int end) {
    int i,j;
    int m=0;
    for(j=0;j<end;j++) {
        for(i=start;i<end;i++) {
            m=max(m,a[i]); }
        swap(m,a[j]);
        start++; } }
int main() {
    int N,K;
    scanf("%d %d\n",&N,&K);
    int chair[N];
    int i;
    for(i=0;i<N;i++)
        scanf("%d ",&chair[i]);
    sort(chair,0,N-1);
    printf("%d ",chair[K]);
    return 0; }