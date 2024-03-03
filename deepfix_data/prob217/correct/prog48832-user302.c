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
    int d,j;
    for(d=0;d<n;i++){
        for(j=1;j<=n;j++){
            if((a[d]+a[j])!=s) {
        continue; }
        else{
        printf("(%d,%d)",d,j);
        break; } } }
    printf("\n");
	return 0; }