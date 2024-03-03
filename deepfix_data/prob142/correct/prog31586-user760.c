#include <stdio.h>
#include <stdlib.h>
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void movestep(char x,char y){
    if(((y=='a')&&(x=='c'))||((y=='b')&&(x=='a'))||((y=='c')&&(x=='b'))){
      move(x,y); }
    else{
        if(x=='a'){
            move(x,'b');
            move('b',y); }
        if(x=='b'){
            move(x,'c');
            move('c',y); }
        if(x=='c'){
            move(x,'a');
            move('a',y); } } }
void movehanoi(char a,char b,char c,int n){
    if(n==1)
      movestep(a,b); }
int main() {
	int n;
	char a='A',b='B',c='C';
	scanf("%d",&n);
	movehanoi(a,b,c,1);
	return 0; }