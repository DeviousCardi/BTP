#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==1) return 1;
    else
    return (catalan(n-1))*2*((2*n)-1)/n+1; }
int main() {
    int t,i,k;
    scanf("%d",&t);
    int a[20];
    for(k=0;k<t;k++){
        scanf("%d",&a[k]);
        for(i=0;i<17;i++){
            if(a[k]==catalan(i)){
                printf("yes\n");
                break;} }
        if(i==17)
        printf("no\n"); }
	return 0; }