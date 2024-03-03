#include <stdio.h>
#include <stdlib.h>
int main() {
    char c[100];
    int i;
    for(i=0;i<100;i++){
        c[i]=getchar(); }
    char s[100];
    int j;
    for(j=99;j>=0;j=j-1){
        s[j]=c[99-j]; }
    int count=0;
    while(c[count]!='\0'){
        count=count+1; }
    int n=count-1;
    int l=0;
    while(l<=n){
        if(s[99-l]!=c[n-l]){
            break; }
        else{
            l++; } }
    if(l==n+1){
        printf("YES"); }
    else{
        printf("NO"); }
    printf("%d",n);
	return 0; }