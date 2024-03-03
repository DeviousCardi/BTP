#include <stdio.h>
int main(){
int i,k,n;
scanf("%d",&n);
int A[n];
scanf("%d",&k);
for(i=1;i<=n;i++) {
    scanf("%d",&A[i]);
    if(A[i]==(k-A[i])) {
        printf("lucky");
        break; }
    else{printf("unlucky");break;} }
    return 0; }