#include <stdio.h>
int main()
{   int c,n,i,j,a[n];
    c=0;
    char str[2*n-1];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%c",&str); }
    for(i=0;i<n;i++){
        if(i%2==0){
            a[n]=a[i]; } }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(a[i]=a[j]){
            c++; }
        if(c=a[i]){
            printf("Yes"); }
        else{
            printf("No"); } } }
    return 0; }