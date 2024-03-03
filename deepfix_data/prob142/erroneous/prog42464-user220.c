#include <stdio.h>
#include <stdlib.h>
void hanoi_nrml(char A,char C,char B,int n){
    if(n==1){
        printf("%c->%c",A,C); }
    hanoi_nrml(A,B,C,n-1);
    hanoi_nrml(B,C,A,n-1); }
void hanoi_cond(char A,char B,char C,int n){
    if(n==1){
        printf("%c->%c",A,B);
        printf("%c->%c",B,C); }
    hanoi_nrml(C,A,B,n-1); }
void move(char From,char To){
    const int NumPerLine=8;
    statict int num=0;
    if(num%NumPerLine==0){
        printf("\n%5d;",num); }
    else{
        printf(""); }
    printf("%c->%c",From,To);
    num++; }
int main(){
    int N;
    scanf("%d",&N);
    return 0; }