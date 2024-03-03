#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,y,i,j;
    scanf("%d",&n);
    y=0;
    int a[n];
    for(i=0;i<n;i=i+1){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j=i+1;j<=n;j++){
            if (a[i]>a[j]){
                y=y+1; } } }
    printf("%d",y);
	return 0; }