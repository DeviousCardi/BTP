#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0){
        return 1; }
    return (2*(2*n+1)/(n+2))*catalan(n-1); }
int main() {
    int i,j,num,testcase[100],catn[17],count=0;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&testcase[i]); }
    for(i=0;i<17;i++){
            catn[i]=catalan(i); }
    for(i=0;i<num;i++){
        for(j=0;j<17;j++){
            if(testcase[i]==catn[j]){count=1;
                break; }
        if(count=1){printf("yes");}
        else printf("no"); } }
	return 0; }