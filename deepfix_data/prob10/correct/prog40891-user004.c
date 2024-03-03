#include<stdio.h>
int main() {
    int n,i,j,result=1,k=0;
    scanf("%d",&n);
    int A[n-1];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(A[j]<A[i]){
                result=result+1; }
            if(A[j]>A[j+1]&&A[j+1]!='\0'){
                result=result-1; } }
        if(k<result){
            k=result; }
        result=1; }
    printf("%d",k-1);
    return 0; }