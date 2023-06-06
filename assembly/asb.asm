.include "/storage/self/primary/arduino_codes/assembly/m328Pdef.inc"
ldi r16,0b00100000
out DDRB,r16

CBI PORTD,2
repeat:
in r16,PIND

ldi r17,0b00000100
eor r16,r17
LSL r16
LSL r16
LSL r16
out PORTB,r16
rjmp repeat
