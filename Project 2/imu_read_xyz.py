import serial
import csv

# Set the serial port and baud rate
ser = serial.Serial('COM4', 9600)

# Read and print the serial data
# while True:
#     data = ser.readline()
#     print(data)

with open('leftSide-trial1.csv', 'w', newline='') as csvfile:
    fieldnames = ['x', 'y', 'z', 'Ground Truth']  # You can add more headers as needed
    writer = csv.DictWriter(csvfile, fieldnames=fieldnames)

    # Write headers to the CSV file
    writer.writeheader()

    # Read and print the serial data
    while True:
        data = ser.readline().decode('utf-8').split(' ') # Read and decode data
        x, y, z = float(data[0]), float(data[1]), float(data[2])
        print(x, y, z)
        # Write data to the CSV file
        writer.writerow({'x': x, 'y': y, 'z': z, 'Ground Truth': 'leftSide'})