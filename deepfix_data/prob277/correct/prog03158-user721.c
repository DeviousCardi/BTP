#include <stdio.h>
#include <stdlib.h>
int main() {
	        int i,j,n,a,b;
	        int k=0, l=0,c=0,d=3;
	        scanf("%d",&n);
	        if ((n%2==0) && (n>=3)){
	        for (i=n;i>=1;i=i-2){
	             while(k<l){
	                 printf(" ");
	                 k++; }
	            k=0;
	            l++;
	            for (j=i;j>=1;j--){
	                printf("*"); }
	            printf("\n"); }
	                for (a=3;a<=n;a=a+2)
	                {while(c<d){
	                    printf(" ");
	                    c++; }
	                c=0;
	                d=d-1;
	            for (b=a;b>=1;b--){
	                printf("*"); }
	                    printf("\n");
	                }}
	                else {
	                    printf("incorrect input"); }
	return 0; }