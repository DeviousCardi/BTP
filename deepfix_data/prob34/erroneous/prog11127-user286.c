#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
        scanf("%d\n",&n);
        int arr[n];
        for(i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
        int t,l;
        scanf("%d",&t);
        for(j=1;j<=t;j++){
            scanf("%d",&l);
            if(arr[l]>arr[l-1]&& arr[l]>arr[l+1])
            printf("Yes");
            else
            printf("No"); }
	return 0; }