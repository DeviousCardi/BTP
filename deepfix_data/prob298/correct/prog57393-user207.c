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
        for(j=0;j<17;j++){
        scanf("%d\n",&a[n]);
        if(a[i]==catalan(j)&&a[i]!=1)
        printf("yes\n");
        else
        k=1; }
    if(k==1)
    printf("no");}
	return 0; }