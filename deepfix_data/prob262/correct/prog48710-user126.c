#include<stdio.h>
#include<strings.h>
int scanf_fun(long int arr[],int start, int end) {
    if(start>end)return 0;
    scanf("%ld",&arr[start]);
    scanf_fun(arr,start+1,end); }
int print_fun(long int arr[],int start,int end) {
    if(end<start)return 0;
    printf("%ld ",arr[end]);
    print_fun(arr,start,end-1); }
int main() {
    long int N;
    scanf("%ld",&N);
    long int arr[N];
    scanf_fun(arr,0,N-1);
    print_fun(arr,0,N-1);
    return 0; }