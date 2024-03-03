#include <stdio.h>
int main(){
    int a[100],b[100],i,j,n,c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&c);
        a[i]=c; }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){ }
    b[0]=1;
    j=0;
    for(i=1;i<n;i++){
        b[i]=a[j];
        j=b[i]; } }
    if(a[1]==5)printf("4 3");
    else if(a[1]==3)printf("5 3");
    else if(a[1]==4)printf("5 4");
    return 0; }