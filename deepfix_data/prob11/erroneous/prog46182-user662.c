#include <stdio.h>
int sum(int a[],int N,int S) {
    int i=0,j=1;
    if(N==0) {
        return 0;
    }else {
        for(i=0;i<N;i++) {
            for(j=1;j<N;j++) {
                sum==a[i]+a[j]; } }
        if(sum==S) {
            return 1;
        }else {
            return 0; } } }
int main() {
    int N,S,i=0,j=0;
    scanf("%d%d",&N,&S);
    int a[1000];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    int sum(a[],N,S);
    if(sum==S){
     printf("YES");
    }else {
        printf("NO") }
    return 0; }