#include <stdio.h>
int main(){
    int i,j,k,count,m;
    int n;
    int arr[10000], a[1000] ;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]); }
    for (i=0; i<=99; i++){
        count = 0;
        for (k=0; k<n; k++){
            if(arr[k]==i)
            count=count+1; }
        a[i]=count; }
    for(j=0; j<=99; j++){
        if (a[j]!=0){
            for(m=1; m<=a[j]; m++)
            printf("%d ", j); } }
    printf("end");
    return 0; }