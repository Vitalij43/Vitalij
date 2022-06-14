#include <8051.h> 

void pp(unsigned char a){ 
ACC=a; //zanosim tekusii simvol v akkymylator 

SCON = 0xCC; //rejim raboti porta 3 
TMOD = 0x20; //2 rejim taimera 
TH1 = 0xFF; 
TL1= 0xFF; 
TR1 = 0x1; 
SBUF = a; 
while(!TI); //ozidaem okonzania peredachi 
TI=0; // sbrasivaem flag okonzania peredazi 

}
void main() 
{
unsigned int i=0,j=0; 
unsigned char st1 [11]={'B','A','J','7','K','O','B','C','K','u','u'}; 
unsigned char st2 [8]={'B','u','T','a','J','7','u','u'}; 
unsigned char st3 [17]={'K','O','H','C','T','A','H','T','u','H','O','B','u','\'','-','|' }; 


PCON = 0x80; 

for(i=0;i<11;i++){ 
pp(st1[i]); 
};
pp(2); 
for(i=0;i<8;i++){ 
pp(st2[i]); 
};
pp(2); 
for(i=0;i<17;i++){ 
pp(st3[i]);
};
pp(10);/////


while(1){};
}