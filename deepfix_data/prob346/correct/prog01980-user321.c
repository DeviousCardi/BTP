#include <stdio.h>
int main(){
    int n=1,a[n],i,num,lowest=a[0];
    scanf("%d",&num);
    for (i=0; i<n; i++){
        scanf("%d",&a[i]); }
    a[0]=lowest;
    if(lowest>a[i]){
        lowest=a[i]; }
    printf ("%d",lowest);
    printf("end");
    return 0; }