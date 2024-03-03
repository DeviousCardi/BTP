#include <stdio.h>
int N,K;
void arr_input(int A[],int size) {
    for(int i=0;i<size;i++)
    scanf("%d",&A[i]); }
void swap(int A[],int i,int j) {
    int temp;
    temp=A[i];
    A[i]=A[j];
    A[j]=temp; }
void sort(int A[],int size) {
    for(int i=0;i<size;i++) {
        for(int j=i+1;j<size;j++) {
            if(A[j]>A[i])
            swap(A,i,j); } } }
int main() {
    scanf("%d %d",&N,&K);
    int A[N];
    arr_input(A,N);
    sort(A,N);
    printf("%d",A[K-1]);
    return 0; }