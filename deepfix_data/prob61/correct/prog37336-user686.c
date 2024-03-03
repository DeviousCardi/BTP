#include<stdio.h>
#include<stdlib.h>
void sort(int *arr, int n, int k, int *output){
    int *count;
    count=(int *)malloc(k*sizeof(int));
    for(int i=0;i<k;i++) *(count+i)=0;
    for(int i=0;i<n;i++){
        *(count+*(arr+i))+=1; }
    int ind=0,j=0;
    while(ind<n){
        for(int i=ind;i<ind+*(count+j);i++) *(output+i)=j;
        ind+=*(count+j);
        j++; }
    free(count); }
int main(){
    int n,k;
    scanf("%d %d\n",&n,&k);
    k+=1;
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d ",arr+i);
    int *output;
    output=(int *)malloc(n*sizeof(int));
    sort(arr,n,k,output);
    for(int i=0;i<n;i++) printf("%d ",*(output+i));
    free(output);
    free(arr);
    return 0; }