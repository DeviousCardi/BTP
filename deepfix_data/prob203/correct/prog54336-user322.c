#include <stdio.h>
int main() {
    int n,i,j,f;
    scanf("%d",&n);
    int a[50];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    f=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
            f=1;
            break; } } }
    if(f=1){
    printf("YES"); }
    else {
        printf("NO"); }
	return 0; }