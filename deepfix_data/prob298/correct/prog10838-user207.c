#include <stdio.h>
#include <stdlib.h>
int catalan(int a){
    int cat=0,i;
    if(a<=1)
    return 1;
    else
    for(i=0;i<a;i++){
        cat=cat+catalan(i)*catalan(a-i-1);}
        return cat; }
int main() {
    int i,n,j,k,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&a[n]);
        for(j=0;j<17;j++){
        if(a[i]==catalan(j)&&a[i]!=catalan(0))
        printf("yes\n"); }
    printf("no\n"); }
	return 0; }