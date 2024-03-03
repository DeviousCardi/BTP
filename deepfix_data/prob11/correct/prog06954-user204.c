#include <stdio.h>
void sot(int arr[],int a,int b,int S,int N) {
    if(arr[a]+arr[b]==S) {
        printf("YES");
        return; }
    else {
        b++;
        if(a+b<N)return sot(arr,a,a+b,S,N);
        else {
            a++;
            b=a+1;
            return sot(arr,a,a+b,S,N); } }
    printf("NO"); }
int main() {
    int N,S,i;
    scanf("%d %d",&N,&S);
    int arr[N];
    for(i=0;i<N;i++) {
        scanf("%d",&arr[i]); }
    sot(arr,0,1,S,N);
    return 0; }