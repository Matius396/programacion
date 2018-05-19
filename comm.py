import serial

puerto = serial.Serial('/dev/tty.usbmodem14211')
while(True):
    datos = str(serial.Serial.readline(puerto))
    print(datos)

#like si me ves jaja salu2#