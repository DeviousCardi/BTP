#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d\n", &n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
	    scanf("%d\n", &a[i]); }
	int t;
	int j;
	scanf("%d", &t);
    for(j=1; j<=t; j++){
        scanf("%d", &i);
        if((i!=0)||(i!=t)){
            if((a[i]>a[i-1])&&(a[i]<a[i+1])){
                printf("Yes\n"); }
            else{
                printf("No\n"); } }
        if(i==1){
            if(a[i]<a[i+1]){
                printf("Yes\n"); }
            else{
              printf("No\n"); } } }
	return 0; }