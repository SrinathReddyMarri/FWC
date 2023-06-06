.include "/storage/self/primary/arduino_codes/assembly/m328Pdef.inc"
sbi DDRB, 5 
ldi r16, 0b00000101
out TCCR0B, r16
clr r18
ldi r20,0b00100000

loop:
eor r18,r20
out PORTB,r18
ldi r19,0b01000000
rcall PAUSE

rjmp loop
PAUSE:
lp2:
IN r16, TIFRO
ldi r17, 0b00000010
AND r16, r17
BREQ PAUSE
OUT TIFRO, r17
dec r19
brne lp2
ret
