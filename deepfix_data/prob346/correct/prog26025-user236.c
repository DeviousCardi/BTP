#include <stdio.h>
int main(){
    int a,i,j,temp;
    scanf("%d",&a);
    int m[a];
    for (i=0;i<a;i++){
        scanf("%d",&m[i]); }
    for (i=0;i<a;i++){
        for (j=0;j<a;j++){
            if(m[j]>m[i]){
                temp=m[i];
                m[i]=m[j];
                m[j]=m[i]; } } }
    for (i=0;i<a;i++){
        printf("%d ",m[i]); }
    printf("end");
    return 0; }