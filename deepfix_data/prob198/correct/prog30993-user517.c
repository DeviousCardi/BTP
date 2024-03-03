#include <stdio.h>
#include <stdlib.h>
int main() {
    int a1[20],a2[20],a3[20];
    int N1,N2,i=0,j=0,k=0,l=0,p=0,q=0,flag=0,a=0,small,x=0;
    scanf("%d\n",&N1);
        for(i=0;i<N1;i++){
            scanf("%d\n",&a1[i]); }
    scanf("%d\n",&N2);
        for(j=0;j<N2;j++){
            scanf("%d",&a2[j]); }
    a3[0]=0;
    for(p=0;p<N1;){
        x=a1[p];
        for(q=0;q<N2;){
            if(a2[q]==x){
                flag=1;
                break; }
            q++; }
        if(flag==1){
            p++; }
        if(flag==0){
            a3[k]=a1[p];
            k++;
            p++; } }
    if(a3[0]==0){
        printf("NO");
        return 0; }
   small=a3[0];
    for(l=1;l<k;l++){
        a=a3[l];
        if(a<small){
            small=a; } }
     printf("%d",small);
	return 0; }