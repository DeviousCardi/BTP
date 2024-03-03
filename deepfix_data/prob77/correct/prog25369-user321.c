#include <stdio.h>
int main() {
    int n=2,a[n],i,j,ele,largest=a[0],lowest=a[0];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        scanf("%d",&ele);
    a[0]=largest;
    if (a[i]>largest){
        a[i]=largest; } }
    for (j=0; j<n; j++){
        scanf ("%d",&a[j]);
        a[0]=lowest;
        if(a[j]<lowest){
            a[j]=lowest; } }
    printf ("%d %d",largest,lowest);
    printf("end");
    return 0; }