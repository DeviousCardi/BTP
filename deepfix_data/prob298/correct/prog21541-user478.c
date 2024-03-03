#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
	    if(n==0){
	        return 1;
	    }else{
	    return ((4*n-2)*catalan(n-1))/(n+1); } }
int main() {
    int i,j,flag=0;
    int n;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<=17;j++){
            if(a[i]==catalan(j)){
                printf("yes");
                flag=1;
                break; } }
        if(flag==0)
        printf("no"); }
	return 0; }