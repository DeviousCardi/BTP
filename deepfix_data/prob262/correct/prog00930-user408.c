#include<stdio.h>
#include<strings.h>
void prev(int A[],int a);
int N;
int main() {
    int Arr[20000],i;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
           scanf("%d",&Arr[i]); }
    prev(Arr,N);
    return 0; }
void prev(int A[],int a) {
    if(a==0)
     return;
    else {
        printf("%d ",A[a-1]);
        prev(A,a-1); } }