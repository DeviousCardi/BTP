#include <stdio.h>
int main(){
    int i,j,n,min=201,m=0;
    scanf("%d",&n);
    int a[2*n],b[n+1];
    for(int p=0;p<2*n;p++){
        scanf("%d",&a[p]);
        b[p/2]=0; }
    for(i=0;i<2*n;i++){
        for(j=i+1;j<2*n;j++){
            if(a[i]==a[j]){
                b[a[i]]=j-i;
                 break; } } }
    for(int g=0;g<n+1;g++){
    printf("%d",b[g]);}
    return 0; }