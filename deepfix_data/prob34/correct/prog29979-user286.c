#include <stdio.h>
#include <stdlib.h>
int main() {
    	int n,i,j;
            scanf("%d\n",&n);
            int arr[n];
            for(i=0;i<n;i++){
            scanf("%d\n",&arr[i]); }
            int t,l;
            scanf("%d",&t);
            for(j=1;j<=t;j++){
                scanf("%d",&l);
                if(l-1<0){
                    if(arr[l]>arr[l+1])
                    printf("Yes\n"); }
                if(l+1>n-1){
                    if(arr[l]>arr[l-1])
                    printf("Yes\n"); }
            if(arr[l]>arr[l-1]&& arr[l]>arr[l+1])
                printf("Yes\n");
                       else
                printf("No\n"); }
    	return 0; }