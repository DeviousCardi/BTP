#include <stdio.h>
#include <stdlib.h>
int main() {
    char c[10000];
    int i;
    for(i=0;i<10000;i++){
        c[i]=getchar(); }
    char s[10000];
    int j;
    for(j=9999;j>=0;j=--){
        s[j]=c[9999-j]; }
    int count=0;
    while(c[count]!=0){
        count=count+1; }
    int n=count-1;
    int l;
    for(l=0;l<=n;l++){
        if(s[9999-l]!=c[n-l]){
            break; } }
    if(l=n){
        printf("YES"); }
    else{
        printf("NO"); }
	return 0; }