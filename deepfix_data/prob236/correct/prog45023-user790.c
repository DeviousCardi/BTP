#include <stdio.h>
int main(){
    int n,i,j;
    int books[i],place[i],new[j];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&books[i]);
    for(i=0;i<n;i++)
    scanf("%d",&place[i]);
    for(i=0;i<n;i++)
    new[place[i]]=books[i];
    for(i=0;i<n;i++)
    printf("%d ",books[i]);
    printf("end");
    return 0; }