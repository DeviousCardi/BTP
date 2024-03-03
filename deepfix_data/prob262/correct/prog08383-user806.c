#include<stdio.h>
#include<strings.h>
void print(int ar[],int n){
    if(n==-1)
        return;
    printf("%d ",ar[n]);
    return print(ar,n-1); }
int main() {
    int N;
    scanf("%d",&N);
    int ar[N];
    for(int i=0;i<N;i++)
        scanf("%d",&ar[i]);
    print(ar,N-1);
    return 0; }