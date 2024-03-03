# include<stdio.h>
# include<stdlib.h>
int p;
void use(int k)  {
    char s[]=("ABC");
   if (p%3==0) {
       move('A','B'); }
    else if (p%3==1) {
    move ('B','C'); }
    else if (p%3==2) {
        move('C','A'); } }
void move(char From, char To)
{      static int num=0;
    const int NumPerLine = 8;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
        else {
  printf("\n%5d: ",(num%NumPerLine)*NumPerLine); }
            printf("%c->%c ", From, To); num++;
    p=num; }
 int main () {
     int k;
     scanf("%d",&k);
    use(k);
    return 0; }