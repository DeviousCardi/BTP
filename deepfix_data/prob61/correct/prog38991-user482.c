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
   b[0]=count(a,0,N);
for(int i=0;i<N;i++) {
    printf("%d ",b[i]); }
 return 0; }
int count(int a[],int key,int N) {
    int i=0;
    for(int j=0;j<N;j++) {
        if(a[j]==key) {
                i=i+1; } }
    return i; }