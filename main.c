typedef struct{
	unsigned int bit0:1;
	unsigned int bit1:1;
	unsigned int bit2:1;
	unsigned int bit3:1;
	
	unsigned int bit4:1;
	unsigned int bit5:1;
	unsigned int bit6:1;
	unsigned int bit7:1;
	
	unsigned int bit8:1;
	unsigned int bit9:1;
	unsigned int bit10:1;
	unsigned int bit11:1;
	
	unsigned int bit12:1;
	unsigned int bit13:1;
	unsigned int bit14:1;
	unsigned int bit15:1;
	
	unsigned int bit16:1;
	unsigned int bit17:1;
	unsigned int bit18:1;
	unsigned int bit19:1;
	
	unsigned int bit20:1;
	unsigned int bit21:1;
	unsigned int bit22:1;
	unsigned int bit23:1;
	
	unsigned int bit24:1;
	unsigned int bit25:1;
	unsigned int bit26:1;
	unsigned int bit27:1;
	
	unsigned int bit28:1;
	unsigned int bit29:1;
	unsigned int bit30:1;
	unsigned int bit31:1;
}REGISTER_;
//CAP CLOCK CHO PORT D:GO TO: AHB1_BASE+RCC_AHB1_BASE+RCC_AHB1_ENA_CLOCK: 0X4002 0000 +0X00003800+0X00000030
#define RCC_AHB1ENR ((REGISTER_ *)0x40023830)

//CHON MODE: GO TO : AHB1_BASE+GPIOD_AHB1_BASE+GPIOx_MODER_OFFSET=0X4002 0000 +0X0000 0C00+0X0000 0000
#define GPIOD_MODER ((REGISTER_ *)0x40020C00)

//CHON OUT or IN:GO TO: AHB1_BASE+GPIOD_AHB1_BASE+GPIOx_ODR_OFFSET=0X4002 0000 +0X0000 0C00+ 0X0000 0014
#define GPIOD_ODR ((REGISTER_ *)0x40020C14)
int main(void)
{
	//SET bit thu 3 len High de cap clock cho pord D ( xem reference manual PAGE 117) 
	RCC_AHB1ENR->bit3=1;
	
	// set bit thu 25 va 24 (PIN 12) lan luot 0 1 de chon mode :OUTPUT ( xem reference manual PAGE 157) 
	GPIOD_MODER->bit24=1;
	GPIOD_MODER->bit25=0;
	
	//set bit 12 de chon ODR12 len muc 1 ( xem reference manual PAGE 159) 
	GPIOD_ODR->bit12=1;
	// thay doi BLINK_LED
	
	
	
}