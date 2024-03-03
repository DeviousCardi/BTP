#include <stdio.h>
int main() {
    int a[50];
    int n,i,j,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j!=i;j<n;j++){
            if(a[i]==a[j]){
                d==1;
                break; }
            if(a[i]!=a[j]){
                d==2;
                continue; } } }
    if (d==1){
        printf("YES"); }
    else if(d==2){
        printf("NO"); }
	return 0; }