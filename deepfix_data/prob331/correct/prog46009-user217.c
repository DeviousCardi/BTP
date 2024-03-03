#include <stdio.h>
int main(){
    int i;
    int j;
    int n;
    scanf("%d",&n);
    for(i=1;i<n;i=i+1){
        for(j=1;j<n;j=j+1){
            scanf("%d%d",&i,&j);} }
            if(i==j==1){printf("Given n x n matix is an identity matrix");}
            else{printf("Given n x n is not an identity matrix");}
            return 0; }