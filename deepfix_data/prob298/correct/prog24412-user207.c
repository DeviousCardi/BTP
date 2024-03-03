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
    int i,n,j,a[n],k=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<17;j++){
        if(a[i]==catalan(j)){
        printf("yes\n");}
         else if(a[i]!=catalan(j)) {
         k=k+1;} }
        if(k==17)
    printf("no\n"); }
	return 0; }