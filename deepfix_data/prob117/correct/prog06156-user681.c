#include <stdio.h>
#include <stdlib.h>
unsigned long c;
 int tower(int n){
        if(n==0){
            return 0; }
        c++;
        tower(n-1);
        tower(n-1);
        return c; }
int main(){
    int t;
    scanf("%d",&t);
    int k,i,j;
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        for(j=0;;j++) {
                c=0;
                if(tower(j)==k) {
                    printf("yes\n");
                    break; }
                if(c>k||k<0) {
                printf("no\n");
                break; } } }
    return 0; }