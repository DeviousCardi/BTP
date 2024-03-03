#include <stdio.h>
int main(){
    int no,i,j,count,t,k,run=0;
    scanf("%d\n",&no);
    int b[no];
    int c[2*no];
    int d[100];
    b[0]=1;
    c[0]=1;
    for(i=1;i<no+1;i++){
        scanf("%d",&b[i]); }
    for(j=0;j<2*no;j++){
        for(count=1;count<no+1;count++){
            if(c[j]==count){
                c[j+1]=b[count];
                break; } } }
    for(i=1;i<=j;i++){
        for(count=i+1;count<=j;count++){
           if(c[i]==c[count]){
               t=count-i;
               i=count;
               printf("%d ",t);
               run++ } }
        if(run==1){break;} }
    return 0; }