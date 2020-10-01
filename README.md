This repo is specific to the ATmega328P.
2 stop bits, 8 data bits

1. Include the header file "uart.h"
2. Initialize UART using the ```UART_init(BAUD_PRESCALER)``` function. 
3. See ```main.c``` as an example. 

Note that if you are working in Atmel Studio, you will need to add the ```uart.c``` file to your project to avoid a compilation error.
To do so, go to the **Solution Explorer** and right-click on your application/project, then go to **Add > Existing Item** to add the ```uart.c``` file.
