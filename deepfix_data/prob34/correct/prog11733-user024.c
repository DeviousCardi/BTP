#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20],i,j,k,n;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
    scanf("%d", &a[i]); }
    j=a[0];
    for(i=0;i<(n-1);i++) {
        k=a[i];
        j=k;
        k=a[i+1];
        if(j<=k)
        { if(i<(n-2)){
            continue;}
            else
            printf("Yes"); }
        else{
            break; } }
	return 0; }