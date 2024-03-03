#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if(a>b){
        return a; }
    else {
        return b; } }
int main() {
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    char c1=getchar();
    char a[500];
    int i,j;
    for(i=0;i<n1;i++){
        a[i]=getchar(); }
    char c2=getchar();
    char b[500];
    for(j=0;j<n2;j++){
        b[j]=getchar(); }
    char s[501];
    int l;
    for(l=0;l<max(n1,n2),l++){
        if(a[l]+b[l]>103){
            s[l]=(a[l]+b[l]-94)%10+47; }
        else{
            s[l]=a[l]+b[l]-47; } }
	return 0; }