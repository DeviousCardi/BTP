#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,temp,b=0;
    scanf("%d\n",&n);
    int arr[1000];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        printf("%d ",arr[i]); }
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                     b=b+(arr[j]>arr[j+1]); }
                else{
                    continue; } } }
    printf("%d",b);
	return 0; }