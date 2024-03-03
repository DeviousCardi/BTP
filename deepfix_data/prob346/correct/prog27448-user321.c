#include <stdio.h>
int main(){
    int n=1,a[n],i,j,num,lowest=a[0];
    scanf("%d",&num);
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    a[0]=lowest;
    if(lowest>a[i]){
        break;
        lowest=a[i];  } }
for (j=0; j<n; j++){
    a[i]=lowest;
    if(lowest>a[j]){
        lowest=a[j]; } }
printf("%d",lowest);
    printf("end");
    return 0; }