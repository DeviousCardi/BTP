#include <stdio.h>
#include <stdlib.h>
 int tower(int n,int c){
        if(n==0){
            return 0; }
        tower(n-1,c+1);
        tower(n-1,c+1);
        return c; }
int main(){
    int n;
    scanf("%d",&n);
    int t,c,i,j;
    for(i=0;i<n;i++){
        scanf("%d",&t); {
            for(j=0;j<20;j++){
                c=0;
                if(tower(j,c)==t){
                    printf("%d",c);
                    break; }
                if(j==19){
                    printf("no"); } } }
    return 0;} }