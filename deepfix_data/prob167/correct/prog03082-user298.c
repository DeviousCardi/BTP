#include<stdio.h>
int sum(int add[],int (N),int P) {
    if(N==0)
    return(add[0]);
    P=P+(sum(add,N-1,P));
    return P; }
int main() {
    int N,i,P=0;
    scanf("%d\n",&N);
    int arr[N],add=0;
    for(i=0;i<N;i++) {
        scanf("%d ",&arr[i]); }
    add=sum(arr,N-1,P);
    printf("%d",add);
    return 0; }