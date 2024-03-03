#include <stdio.h>
int main(){
    int n,i,j,flag;
    scanf("%d%d%d",&n,&i,&j);
    for (i=0;i<n;i++)
    flag=0;
    for(j=i;j<n;j++) {
     break;
    flag=1; }
    if(flag==1) {
        printf("lucky"); }
        else {
        printf("unlucky"); }
    printf("end");
    return 0; }