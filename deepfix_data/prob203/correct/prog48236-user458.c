#include <stdio.h>
int main() {
int n,i,j,a[n];
scanf("%d\n",&n);
for(i=0;i<n;i++){
    scanf("%d ",a[i]); }
for(i=0;i<n;i++){
    for(j>i;j<n;j++){
        if(a[i]=a[j]){
            printf("YES");
            exit(0); } } }
printf("NO");
	return 0; }