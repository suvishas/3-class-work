#include<stdio.h>
# include<conio.h>
struct  pack
{
char a ;
int b ;
double c ;
} ;

int  main( )
{
struct pack p ;
printf("\n Occupied size by union pack: %d",sizeof(struct pack) ) ;
p.a = 'G' ;
printf("\n Value of a:%c", p.a ) ;
p.b = 20 ;
printf("\n Value of b:%d",p.b ) ;
p.c = 2545.6250 ;
printf("\n Value of c:%f",p.c ) ;
p.a = 'G' ;
p.b = 20 ;
p.c = 2545.6250 ;
printf("\n Value of a:%c, b:%d, c:%f",p.a,p.b,p.c ) ;
return 0 ;
}
