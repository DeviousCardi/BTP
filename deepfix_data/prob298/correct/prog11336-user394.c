#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0){
        return 1; }
    return (2*((2*n)-1))*(catalan(n-1))/(n+1); }
int main() {
    int i,j,num,testcase[100],catn[17],count;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d\n",&testcase[i]);
        printf("%d",testcase[i]); }
    for(i=0;i<17;i++){
            catn[i]=catalan(i);
            printf("%d\n",catn[i]); }
    for(i=0;i<num;i++){
        count=0;
        for(j=0;j<17;j++){
            if(testcase[i]==catn[j]){count=1;
                break;
            }}
        if(count==1){printf("yes");}
        else printf("no");
        printf("\n"); }
	return 0; }