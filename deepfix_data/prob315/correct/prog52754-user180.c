#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    scanf("%d\n",&N);
    int A[1000];
    int k=0;
    while(k<N){
        scanf("%d",&A[k]);
        k++; }
    int A2[1000];
    for(int j=0;j<N;j++){
        int p=0;
        for(int l=j+1;l<N;l++){
            if(A[j]>A[l])
                p++; }
        A2[j]=p; }
    int i=0;
    while(i<N){
        printf("%d",A2[i]);
        i++; }
	return 0; }