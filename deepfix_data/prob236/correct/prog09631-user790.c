#include <stdio.h>
int main(){
    int n,i,j,p;
    int books[100],place[100],new[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&books[i]);
    for(i=0;i<n;i++)
    scanf("%d",&place[i]);
    for(i=0;i<n;i++){
    p=place[i];
    new[p]=books[i];}
    for(j=0;j<n;j++)
    printf("%d ",new[j]);
    printf("end");
    return 0; }