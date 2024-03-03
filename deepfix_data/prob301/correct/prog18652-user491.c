#include <stdio.h>
#include <stdlib.h>
void read(int a[], int n){
	   int i=0;
	    while(i<n){
	        scanf("%d",&a[i]); } }
int main(){
    int i,n,j;
    scanf("%d",&n);
    int b[n];
    read(b,n);
    int count= 0;
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if(b[i]==b[j]){
                count++; }
        printf("%d",count); } }
    return 0; }