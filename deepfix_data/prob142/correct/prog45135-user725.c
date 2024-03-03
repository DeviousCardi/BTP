#include <stdio.h>
#include <stdlib.h>
int f=0;
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
int n;
char a='A',b='B',c='C';
int pol2[100],pol3[100];
int k,l,j;
int main() {
    scanf("%d",&n);
    count();
	return 0; }
int search(int pol[n]){
    for(k=0;k<100;k++){
        if(pol[k]<f) return 1; }
    return 0; }
void count(){
    if(f==n)return;
    if(search(pol2)) {move(b,c);pol3[j]=pol3[k];j++;}
    else {move (a,b);pol2[l]=f;l++;}
    if(search (pol3)) {move (c,a);}
    else {move (b,c);pol3[j]=f;j++;}
    f++;
    count(); }