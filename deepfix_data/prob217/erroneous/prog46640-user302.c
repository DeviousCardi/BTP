#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int a[n];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int s;
    scanf("%d",&s);
    int i,j;
    for(i=0;i<n;i++){
        for(j=1;j<=n;j++){
            if(a[i]+a[j]!=s) {
        continue; }
        else{
        printf("(%d,%d)",i,j); } }
    printf("\n");
	return 0; }