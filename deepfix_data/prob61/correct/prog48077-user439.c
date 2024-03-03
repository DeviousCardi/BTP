#include<stdio.h>
#include<stdlib.h>
void sort(int *input,int*count,int*output,int k,int n) {
    int i,j=0;
    for(i=0;i<=k;i++) {
        for(j=0;j<n;j++) {
            if(input[j]==i)
            count[i]+=1; } }
    j=0;
    for(i=0;i<=k;i++) {
        while(count[i]>0) {
            output[j]= i;
            j++;
            count[i]--; } } }
int main() {
    int n,k=0;
    int*input;int*output;int*count;
    scanf("%d%d",&n,&k);
    input=(int*)malloc(n*sizeof(int));
    output=(int*)malloc(n*sizeof(int));
    count=(int*)calloc(k+1,(k+1)*sizeof(int));
    for(int i=0;i<n;i++) {
        scanf("%d",&input[i]); }
    sort(input,count,output,k,n);
    for(int i=0;i<n;i++) {
        printf("%d",output[i]); } }