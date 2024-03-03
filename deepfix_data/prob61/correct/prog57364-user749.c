#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,k,i,j;
    int *input;
    int *count;
    int *output;
    int oldCount,total;
    scanf("%d %d",&n,&k);
    input=(int*)(malloc(n*sizeof(int)));
    count=(int*)(malloc((k+1)*sizeof(int)));
    output=(int*)(malloc(n*sizeof(int)));
    for(i=0;i<n;i++){
        scanf("%d",&input[i]); }
    for(i=0;i<n;i++){
        count[i]=0; }
    for(i=0;i<=k;i++){
        for(j=0;j<n;j++){
            if(input[j]==i) count[i]++; } }
    total=0;
    for(i=0;i<=k;i++){
        oldCount=count[i];
        count[i]=total;
        total=total+oldCount; }
    for(i=0;i<=k;i++){
        for(j=count[i];j<count[i+1];j++){
            output[j]=i; } }
    for(i=0;i<n;i++){
        printf("%d",output[i]); }
    return 0; }