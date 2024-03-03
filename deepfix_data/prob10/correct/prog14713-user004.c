#include<stdio.h>
int main() {
    int n,i,j,result=1,k;
    scanf("%d",&n);
    int A[n-1];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(A[j]<A[i]){
                result=result+1; }
            printf("%d\n",result); }
        if(k<result){
            k=result;
            printf("%d\n",k); }
        result=1; }
    return 0; }