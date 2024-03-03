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
    int i,j,k=0;
    int m;
        m=0;
        for(i=start;i<end;i++) {
            m=max(m,a[i]); }
        swap(m,a[k]);
        k++;
    sort(a,start+1,end); }
int main() {
    int N,K;
    scanf("%d %d\n",&N,&K);
    int chair[N];
    int i;
    for(i=0;i<N;i++)
        scanf("%d ",&chair[i]);
    sort(chair,0,N);
    printf("\n%d ",chair[K-1]);
    return 0; }