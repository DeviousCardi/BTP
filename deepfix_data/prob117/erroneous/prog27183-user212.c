int
main(){
const
int
ncity
= 4;
const
int
lencity
= 10;
char
city[
ncity
][
lencity
];
int i ;
for ( i
=0; i <
ncity ; i
++){
scanf("%s
", city[ i
]); }
for ( i
=0; i <
ncity ; i
++){
printf("%
d %s \
n", i, city[i
]); }
return 0;}