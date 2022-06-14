#include <8051.h>

void main()
{
unsigned int i,j, flag1=0, flag2=0, flag3=0, flag4=0;
unsigned char *str="/*-+=3690258C147";
unsigned char *str1="BXOD";

P0 = 0x38;
P0 = 0x80;
P2 = 0x1;
P2 = 0x0;


do
{
i = -1;

P1 = 0xEF;
if(P1 == 0xEE) i=15;
if(P1 == 0xED) {i=14;flag2=1;}//cifra 4
if(P1 == 0xEB) {i=13;flag1=1;}// cifra 1
if(P1 == 0xE7){P0 = 0x01;P2 = 0x1;P2 = 0x0;} //ochiska terminala
P1 = 0xDF;
if(P1 == 0xDE) i=11;
if(P1 == 0xDD) i = 10;
if(P1 == 0xDB) {i = 9;flag4=1;}
if(P1 == 0xD7) i=8;// cifra 0
P1 = 0xBF;
if(P1 == 0xBE) i = 7;
if(P1 == 0xBD) i = 6;
if(P1 == 0xBB) {i = 5;flag3=1;}//cifra 3
if(P1 == 0xB7) i = 4;
P1 = 0x7F;
if(P1 == 0x7E) i = 3;
if(P1 == 0x7D) i = 2;
if(P1 == 0x7B) i = 1;
if(P1 == 0x77) i = 0;
if(i != -1)
{
P0 = str[i];
P2 = 0x3;
P2 = 0x2;

}
if(j != -1 && flag1==1 && flag2==1 && flag3==1 && flag4==1)
{
j = -1;
//P0='B';
P0 = str1[j];
P2=0x3;
P2=0x2;


}
}
while(1);
} 