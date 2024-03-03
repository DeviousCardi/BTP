#include <stdio.h>
#include <stdlib.h>
int catalan(int a){
    int cat=0,i;
    if(a<=1)
    return 1;
    else if(a>1) {
        for(i=0;i<a;i++){
        cat=cat+catalan(i)*catalan(a-i-1); }
        return cat; }
    return 0; }
int main() {
    int i,n,j,a[n];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]); }
    for(i=0;i<n;i++){
        int k=0;
        for(j=0;j<17;j++){
        if(a[i]==catalan(j))
        printf("yes\n");
        if(a[i]==catalan(j))
        break;
         else if(a[i]!=catalan(j))
        k=k+1; }
        if(k==17)
    printf("no\n"); }
	return 0; }