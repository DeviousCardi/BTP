#include <stdio.h>
#include <stdlib.h>
void move( A ,B) {
    const int NumPerLine = 9;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", A,B);
    num++; }
void move(A,C){
    const int NumPerLine=1;
    static int num=0;
    if(num%NumPerLine==0){
        printf("\n%5:",num); }
    else{
        printf(" "); }
    printf("%c->%c",A,C);
    num++; }
void move(B,C){
    const int NumPerLine=9;
    static int num=0;
    if(num%NumPerLine==0){
        printf("\n%5d:",num); }
    else{
        printf(" "); }
    printf("%c->%c",B,C);
    num++; }
	return 0; }