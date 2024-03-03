#include <stdio.h>
int main(){
    int n,i,j;
    int oldpos[100];
    int newpos[100];
    scanf("%d\n",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&oldpos[i]); }
    scanf("\n");
    for (i=0;i<n;i++) {
        scanf("%d",&newpos[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
        if(newpos[j]==i)
        printf("%d ",oldpos[j]); } }
    printf("end");
    return 0; }