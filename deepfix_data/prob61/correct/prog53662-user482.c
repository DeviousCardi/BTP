#include<stdio.h>
int main() {
    int N=0;
    int K=0;
    scanf("%d%d",&N,&K);
        int a[N];
        for(int i=0;i<N;i++) {
                a[i]=0;
                scanf("%d",&a[i]); }
            int b[N];
            for(int i=0;i<N;i++) {
                    b[i]=0; }
int count(int a[],int key,int N);
    int end=N-1;
    for(int j=K;0<j;j--) {
        int x=count(a,j,N);
        for(int n=end;n>n-x;n--) {
            b[n]=j; }
        end=end-x; }
for(int i=0;i<N;i++) {
    printf("%d ",b[i]); }
 return 0; }
int count(int a[],int key,int N) {
    int i=0;
    for(int j=0;j<N;j++) {
        if(a[j]==key) {
                i=i+1; } }
    return i; }