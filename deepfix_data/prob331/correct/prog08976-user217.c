#include <stdio.h>
int main(){
    int i;
    int j;
    int n;
    scanf("%d",&n);
    for(i=1;i<n;i=i+1){
        for(j=1;j<n;j=j+1){
            scanf("%d%d",&i,&j);} }
            if(i==j==1){printf("GIVEN 3 x 3 matix is an IDENTITY MATRIX");}
            else{printf("Given n x n is not an identity matrix");}
            return 0; }