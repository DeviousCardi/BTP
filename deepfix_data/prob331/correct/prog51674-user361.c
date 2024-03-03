#include <stdio.h>
int main(){
int n,a,i,j;
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a);
        if((j==i+1&&a==1)&&(j!=i+1&&a==0)){
            printf("im"); }
        else("ni"); } }
return 0; }