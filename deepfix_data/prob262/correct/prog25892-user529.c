#include<stdio.h>
#include<strings.h>
void rev(int,int[]);
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    rev(N,arr);
    return 0; }
void rev(int N,int arr[]) {
    printf("%d ",arr[N-1]);
    if(N==1)
        return;
    rev(N-1,arr); }