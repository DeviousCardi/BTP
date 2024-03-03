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
                int flag1=0;
                int flag2=0;
                if(l==0){
                    flag1=1; }
                else if(arr[l]>arr[l-1]){
                    flag1=1; }
                if(l==n-1){
                    flag2=1; }
                else if(arr[l]>arr[l+1]){
                    flag2=1; }
                if(flag1 && flag2)
                printf("Yes\n");
                else
                printf("No\n"); }
    	return 0; }