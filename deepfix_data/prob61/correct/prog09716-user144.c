#include<stdio.h>
int main(){
    int n,k;
    int* input;
    int* output;
    int* count;
    int oldCount;
    int total=0;
    int i,x;
    scanf("%d%d",&n,&k);
    input = (int*)malloc(n*sizeof(int));
    output = (int*)malloc(n*sizeof(int));
    count = (int*)malloc((k+1)*sizeof(int));
    for(x=0;x<=k;x++){
        count[x]=0; }
    for(i=0;i<n;i++){
        scanf("%d",&input[i]); }
    for(x=0;x<=k;x++){
        for(i=0;i<n;i++){
            if(input[i]==x){
                count[x]++; } } }
    for(i=0;i<k+1;i++){
        printf("%d ",count[i-1]); }
    for(i=0;i<=k;i++){
        oldCount=count[i];
        count[i]=total;
        total= total + oldCount; }
    for(x=0;x<=k;x++){
        output[count[x]]=x;
        count[x]++; }
    return 0; }