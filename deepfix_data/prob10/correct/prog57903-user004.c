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
            if(A[j]>A[j+1]&&j<i){
                result=result-1; }
            printf("r%d\n",result); }
        if(k<result){
            k=result-1;
            printf("k%d\n",k); }
        result=1; }
    printf("%d",k);
    return 0; }