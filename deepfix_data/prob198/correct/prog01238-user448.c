#include <stdio.h>
#include <stdlib.h>
int main() {
    int N1,N2,i,j,c,flag;
    scanf ("%d",&N1);
    int a1[25],a2[25];
    for(i=0;i<N1;i++){
    scanf("%d",&a1[i]); }
    scanf ("%d",&N2);
    for(i=0;i<N2;i++){
    scanf("%d",&a2[i]); }
    for (i=0;i<N1;i++){
        for (j=0;j<N1-1;j++){
            if (a1[j]>a1[j+1]){
                c=a1[j];
                a1[j]=a1[j+1];
                a1[j+1]=c; } } }
    printf("%s",a1);
    for (i=0;i<N1;i++){
        for(j=0;j<N2;j++){
            if (a1[i]==a2[j]){
               flag=1; } }
        if(flag!=1){
            printf("%d",a1[i]);
            break; } }
    if (flag==1){
        printf("NO"); }
	return 0; }