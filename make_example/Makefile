all: led.o led.hex flash clean
led.o:
	avr-gcc -mmcu=atmega328p led.c -o led.out
led.hex:
	avr-objcopy -j .text -j .data -O ihex led.out led.hex
flash:
	sudo avrdude -P /dev/ttyACM0 -b 57600 -p m328p -c STK500 -F -e -U flash:w:led.hex
clean:
	rm led.hex
	rm led.out


#ls /dev/ttyACM*
# this checks what USB port the programmer is plugged into
