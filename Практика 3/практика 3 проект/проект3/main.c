#include <8051.h> 
void main() 
{ 
unsigned int i; 
unsigned char *str2="        ";
unsigned char *str3="Vitalij";
P2 = 0x38; 
P2 = 0x1; 
P2 = 0x0; 
P2 = 0x80; 
P2 = 0x1; 
P2 = 0x0; 
for(i=7;i<8;i++) //????? ?? LCD ?????? ??????
{ 
P0 = str2[i];
P2 = 0x3;
P2 = 0x2;
} 
for(i=0;i<8;i++) //????? ?? LCD ?????? ??????
{ 
P0 = str3[i];
P2 = 0x3;
P2 = 0x2;
}
P0 = 0x01;
P2 = 0x01;

while(1); 
}