#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[20],n,i,test[20],c=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&arr[i]); }
	scanf("%d\n",&c);
	for(i=0;i<c;i++) {
	    scanf("%d\n",&test[i]);
	    if(n==1)
	        printf("Yes\n");
	    else if(i==0) {
	        if(arr[test[i]]<arr[test[i+1]])
	            printf("Yes\n");
            else
                printf("No\n"); }
        else if(i==n-1) {
            if(arr[test[i]]<arr[test[i-1]])
                printf("Yes\n");
            else
                printf("No\n"); }
        else {
            if(arr[test[i]]<arr[test[i-1]] && arr[test[i]]<arr[test[i+1]])
                printf("Yes\n");
            else
                printf("No\n"); } }
	return 0; }