#include <stdio.h>
#include <stdint.h>

int main(){
	
	uint8_t A=12; // 0b 0000 1010
	uint8_t B=8; // 0b 0000 0101

	A <<= 4; // 0b 1010 0000
	A |= B; // 0b 1010 0101
	B = (A>>4);
	A&=0x0F; // 0b 0000 0101
	
	printf("A:%d\n",A);    
	printf("B:%d\n",B);
}
