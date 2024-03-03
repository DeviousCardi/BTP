#include <stdio.h>
#include <stdlib.h>
int binomial(int n,int k){
    if(n<k){return 0;}
    else if(n==0&&k==0){return 0;}
    else if(k==0){return 1;}
    else return binomial(n-1,k)+binomial(n-1,k-1); }
int main() {
    int i,j,mat[20][20],value,a=0;
    scanf("%d",&value);
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            mat[i][j]=binomial(i,j);
            if(mat[i][j]==value){
                a=1;
                printf("%d\n%d",i,j);
                break; } }
      if(a==1){break;} }
	return 0; }