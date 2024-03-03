#include <stdio.h>
int main() {
    int a[50];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j!=i;j<n-1;j++){
            if(a[i]==a[j]){
                printf("YES"); }
            else{
                continue; } } }
    for(i=0;i<n-1;i++){
        if(j=n-1){
            if(a[i]=a[n-1]){
                printf("YES"); } }
        else{
            printf("NO"); } }
	return 0; }