#include <stdio.h>
int main(){
    int i,j,k,m,a[10000];
    scanf("%d", &k);
    if(k<=10000){
        for(i=0;i<k;i++){
            scanf("%d", &a[i]); }
        for(i=0;i<k;i++) {
            for(j=i+1;j<k;j++){
                if(a[i]>a[j]){
                    m=a[i];
                    a[i]=a[j];
                    a[j]=m; } } }
        for(i=0;i<k;i++) {
            printf("%d ", a[i]); } }
    printf("end");
    return 0; }