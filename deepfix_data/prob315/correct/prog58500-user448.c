#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,count=0;
    scanf("%d",&n);
    int a[102],b[102];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (a[i]>a[j]){
                count++; } }
        b[i]=count; }
    printf("%d",count);
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d",b[i]);
        printf(" "); }
	return 0; }