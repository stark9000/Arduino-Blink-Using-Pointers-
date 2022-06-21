volatile uint8_t * const data_reg = (uint8_t *) 0x25; //addresses of the I/O register 0x25 for PORTB

volatile uint8_t * const dir_reg  = (uint8_t *) 0x24; //addresses of the I/O register 0x24 for DDRB

void setup() {
  *dir_reg = 0x20; // set the bit 5 to 1 (set the PB5 pin as output)

  *data_reg = 0x20; // set the bit 5 to 1 (drive the PB5 high > turn LED on)
}

void loop() {
  *data_reg = 0x20; // Set pin PB5 high (logic one) > turn LED on

  _delay_ms(1000); // wait for a second

  *data_reg = 0x00;// Set pin PB5 low (logic zero) > turn LED off

  _delay_ms(1000); // wait for a second
}
