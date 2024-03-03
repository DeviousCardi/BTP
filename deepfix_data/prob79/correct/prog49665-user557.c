#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    int *arr;
    int time1,time2;
    int indexA=0,indexB;
    scanf("%d",&n);
    indexB=n-1;
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",arr+i); }
    time1=arr[0];time2=arr[n-1];
    while(1){
        if(time1>time2){
            indexB--;
            time2+=arr[indexB]; }
        else {
            indexA++;
            time1+=arr[indexA]; }
        if((indexA==indexB-1)||(indexA==indexB)){
            break; } }
    printf("%d %d",indexA+1,n-indexB);
	return 0; }