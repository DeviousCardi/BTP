#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,k,i;
    int *input;
    int *count;
    int *output;
    scanf("%d %d",&n,&k);
    input=int*(malloc(n*sizeof(int)));
    count=int*(malloc((k+1)*sizeof(int)));
    output=int*(malloc(n*sizeof(int)));
    for(i=0;i<n;i++){
        scanf("%d",&input[i]); }
    for(i=0;i<n;i++){
        count[i]=0; } }