# include<stdio.h>
# include<stdlib.h>
void use(int k)  {
    static int num = 0;
    char s[]=("ABC");
   if (num%3==0) {
       move('A','B'); }
    else if (num%3==1) {
    move ('B','C'); }
    else if (num%3==2) {
        move('C','A'); } }
static int num = 0;
void move(char From, char To) {
    const int NumPerLine = 8;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
        else {
  printf("\n%5d: ",(num%NumPerLine)*NumPerLine); }
            printf("%c->%c ", From, To); num++; }
 int main () {
     int k;
     scanf("%d",&k);
    use(k);
    return 0; }