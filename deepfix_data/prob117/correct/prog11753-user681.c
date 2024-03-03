#include <stdio.h>
#include <stdlib.h>
int c;
 int tower(int n){
        if(n==0){
            return 0; }
        c++;
        tower(n-1);
        tower(n-1);
        return c; }
int main(){
    int n;
    scanf("%d",&n);
    int t,i,j;
    for(i=0;i<n;i++) {
        scanf("%d",&t);
        for(j=0;j<20;j++) {
                c=0;
                if(tower(j)==t) {
                    printf("yes\n");
                    break; }
                if(j==19)
                printf("no\n"); } }
    return 0; }