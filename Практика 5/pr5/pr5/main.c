#include <8051.h>
void main()
{
unsigned char i,j;
unsigned char *str = "00";
unsigned char row[5] = {0xFE, 0xFD, 0xFB, 0xF7, 0xEF};
unsigned char col[5] = {0x1E, 0x1D, 0x1B, 0x17, 0xF};
unsigned char *num[25] = {"1","2","3","4","5","6","7","8","9"};
while(1){
for(i=0;i<5;i++)
{
	P3=col[i];
	for(j=0;j<5;j++)
	{
	if(P1 == row[j])
	{
		P0 = 0x38;
		P2 = 0x1;
		P2 = 0x0;
		P0 = 0x80;
		P2 = 0x1;
		P2 = 0x0;
		str = num[i+j*5];
		for(i=0;i<2;i++)
		{  
			P0 = str[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	}
}
}

}
