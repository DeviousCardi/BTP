#include <stdio.h>
int main()
{   int num,dobcount=0,c;
    scanf("%d",&num);
    int checkarr[num];
    for(int i=0;i<num;i++){
        scanf("%d,",&checkarr[i]);
        if(checkarr[i]==0){
            c++;
            printf("No"); } }
    for(int j=0;j<num;j++){
        int count=1;
        if(checkarr[j]!=0){
            for(int k=j+1;k<num;k++){
                if(checkarr[k]==checkarr[j]){
                    checkarr[k]=0;
                    count++; } }
            if(checkarr[j]!=count){
                dobcount++;
                break; } } }
    if(dobcount!=0){
        printf("No"); }
    else if(c==0){
        printf("Yes"); }
    return 0; }