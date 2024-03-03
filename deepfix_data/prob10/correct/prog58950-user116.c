#include<stdio.h>
int maxcount(int A[], int size){
    int k,x,count=1;
    x=A[0];
    for(k=0;k<size-1;k++){
        if(A[k+1]>x){
            x=A[k+1];
            count=count+1; } }
    return count; }
int main() {
    int n,i,j,y,p;
    scanf("%d",&n);
    int A[n],maxtill[n];
    for(i=0;i<n;i++){
       scanf("%d",&A[i]); }
    for(j=0;j<n;j++){
        maxtill[j]=maxcount(A,j+1); }
    y=maxtill[0];
    for(p=0;p<n-1;p++){
        if(A[p+1]>y){
            y=A[p+1]; } }
    printf("%d",y);
    return 0; }