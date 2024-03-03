#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d ",&k);
            if(i==j){
                if(k!=1){
                printf ("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",&n,&n);
                return 0;}
                else if (k!=0){
                printf ("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",&n,&n);
                return 0;} } }
        printf("\n"); }
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",&n,&n);
    return 0; }