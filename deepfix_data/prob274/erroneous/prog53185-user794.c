#include <stdio.h>
int main(){
    int a[100],b[100],i,j,n,c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&c);
        a[i]=c; }
    b[0]=1;
    j=1;
    for(i=1;i<n;i++){
        b[i]=a[j];
        j=b[i]; }
    printf("%d%d%d%d%d",[0],[1],[2],b[3],b[4]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(b[j]==b[i]){
            printf("%d %d",j,j-i); }
            else{
                printf("5 %d",3); } } }
    return 0; }