#include <stdio.h>
int main(){
    int i,j,n, flag=0;
    int a[100];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%d",&a[j]); }
        if (a[i]==1){
            for (j=0;j<n,j!=i;j++){
                if (a[j]==0){
                    continue; }
                else {
                    flag=1;
                    break; } } }
        else{
            flag=1;
            break; }
        if (flag==1)
        break; }
 if (flag==0){
     printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",&n,&n); }
 else printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",&n,&n);
    return 0; }