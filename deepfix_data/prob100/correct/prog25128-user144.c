#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    int rowmax=0;
    int lstmax=0;
    int i,j;
    int curent;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&curent);
            if(j==0){
                rowmax=curent; }
            if(curent>rowmax){
                rowmax=curent; } }
        if(i==0){
            lstmax=rowmax; }
        if(rowmax<lstmax){
            lstmax=rowmax; } }
    printf("%d",lstmax);
    return 0; }