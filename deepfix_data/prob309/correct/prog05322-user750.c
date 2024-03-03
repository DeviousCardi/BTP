#include <stdio.h>
int main()
{   int num,count=1,dobcount=0;
    scanf("%d",&num);
    int checkarr[num];
    for(int i=0;i<num;i++){
        scanf("%d,",&num); }
    for(int j=0;j<num;j++){
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
    else{
        printf("Yes"); }
    return 0; }