#include <stdio.h>
int main() {
    int a[50];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j!=i;j<n;j++){
            if(a[i]==a[j]){
                printf("YES"); }
            else{
                continue; } } }
	return 0; }