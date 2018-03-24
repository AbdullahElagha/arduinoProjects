// rx

#include <VirtualWire.h>
void setup()
{
    vw_set_ptt_inverted(true); // Required for DR3100
    vw_set_rx_pin(12);
    vw_setup(4000);  // Bits per sec
    pinMode(2, OUTPUT);
    pinMode(4, OUTPUT);

    vw_rx_start();       // Start the receiver PLL running
}
    void loop()
{
    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;

    vw_get_message(buf, &buflen); // Non-blocking
    
      if(buf[0]=='1')
      {
        digitalWrite(2,1); // red
      } 
      
      else
     {
        digitalWrite(4,1); // grn
      }

     
}
