#include <8051.h>
void msec (int x) 
{
while(x-->0) 
{
TH0 = (-10000)>>8 ;
TL0=-10000; 
TR0=1;
do;
while(TF0==0);
TF0=0; 
TR0=0;
}
}
void main() 
{
TMOD=2x1; 
P1=0x0;
P1=0x1;
msec(100);
P1=0x6;
msec(400);
P1=0x20;
msec(100);
P1=0x40;
msec(400);
P1=0x18;
msec(800);
P1=0x0;
while(1);
}