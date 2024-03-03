#include<stdio.h>
int A[20];
void f(int MaxTill[],int i) {
    int j,max,f;
    max=MaxTill[0];
    for(j=i-1;j>=0;j--) {
        if(A[j]<A[i]) {
            if(max<MaxTill[j]) {
                max=MaxTill[j];
                f=1; } } }
    if(f)
    MaxTill[i]=max+1;
    else
    MaxTill[i]=1; }
int main() {
    int N,i,MaxTill[20],max;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]); }
    MaxTill[0]=1;
    for(i=1;i<N;i++) {
        f(MaxTill,i);
        printf("%d\n",MaxTill[i]); }
    max=MaxTill[0];
    for(i=1;i<N;i++) {
        if(max<MaxTill[i])
        max=MaxTill[i]; }
    printf("%d",max); }