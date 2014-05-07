#include "System.h"

#define Execute(func) if(func.Init) func.Init()

void SysInit(void);

TSystem Sys = {SysInit,};

void SysInit(void)
{
	//if(Sys.Boot->Init) Sys.Boot->Init();
	Execute(Sys.Core);
	Execute(Sys.Boot);
	Execute(Sys.Mem);
	Execute(Sys.Flash);
	Execute(Sys.IO);
	Execute(Sys.Usart);
	Execute(Sys.Analog);
	Execute(Sys.Spi);
	/*Execute(Sys.I2c);
	Execute(Sys.Pwm);
	Execute(Sys.Lcd);*/
}

void TCore_Init(void)
{
}

void TBoot_Init(void)
{
}

void TIO_Init(void)
{
}

void TUsart_Init(void)
{
}
