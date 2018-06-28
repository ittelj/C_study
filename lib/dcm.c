/* ============================ [ INCLUDES  ] ====================================================== */
#include <stdio.h>
#include <stdint.h>
/* ============================ [ MACROS    ] ====================================================== */
/* ============================ [ TYPES     ] ====================================================== */
/* ============================ [ DECLARES  ] ====================================================== */
extern int cantp_transmit(uint8_t *data, uint32_t length);
/* ============================ [ DATAS     ] ====================================================== */
/* ============================ [ LOCALS    ] ====================================================== */
/* ============================ [ FUNCTIONS ] ====================================================== */
void dcm_rx_indication(uint8_t *buffer,uint16_t count)
{
	uint8_t i;
	uint8_t data[]={1,2,3,4,5,6,7,8,9,0x11,0x22,0x33,0x44,0x55,0x66,0x77,0x88,0x99,0x10,0x20,0x30,0x40,0x50,0x60};
	printf("all received data :\n");
	for(i=0;i<count;i++)
	{
		printf("%02x,",buffer[i]);
	}
	printf("\n");

	cantp_transmit(data,sizeof(data));

}