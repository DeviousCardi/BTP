#include<stdio.h>
int main(){
    int n,a,flag=1;
    scanf("%d",&n);
    for(int i=0;i<n && flag==1;i++){
        for(int j=0;j<n && flag==1;j++){
        scanf("%d",&a);
        if(i==j){
            if(a!=1)
            flag=0; }
        if(i!=j){
            if(a!=0)
            flag=0; } } }
    if(flag==1)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }