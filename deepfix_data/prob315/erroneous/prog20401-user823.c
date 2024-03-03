#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,temp,b=0;
    scanf("%d",&n);
    int arr[1000];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
            for(j=o;j<n;j++){
                if(arr[i]>arr[j] && i<j){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp; }
                    b=b+((arr[i]>arr[j]) && (i<j)); } }
    printf("%d",b);
	return 0; }