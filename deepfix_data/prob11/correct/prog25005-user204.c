#include <stdio.h>
int sot(int arr[],int a,int b,int S,int N) {
    if(arr[a]+arr[b]==S) {
        return 1; }
    else {
        b++;
        if(a+b<N)return sot(arr,a,a+b,S,N);
        else {
            a++;
            b=a+1;
            return sot(arr,a,a+b,S,N); } } }
int main() {
    int N,S,i,check;
    scanf("%d %d",&N,&S);
    int arr[N];
    for(i=0;i<N;i++) {
        scanf("%d",&arr[i]); }
    check=sot(arr,0,1,S,N);
    if(check==1) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }