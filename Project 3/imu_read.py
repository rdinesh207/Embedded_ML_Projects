import serial
import csv
import random

# Set the serial port and baud rate
ser = serial.Serial('COM4', 9600)

# Define constants for ground truth labels
supine = 1
prone = 2
side = 3
sit = 4
unknown = 5

# File names
combined_csv = 'dataset.csv'
each_csv = 'unknown-trial4.csv'

# Open the 'unknown-trial4.csv' file for writing
with open(each_csv, 'w', newline='') as csvfile:
    # Open the 'dataset.csv' file for appending
    with open(combined_csv, 'a', newline='') as combinedCsvfile:
        fieldnames = ['acc_x', 'acc_y', 'acc_z', 'gyro_x', 'gyro_y', 'gyro_z', 'magneto_x', 'magneto_y', 'magneto_z', 'Ground Truth']  # You can add more headers as needed
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
        combinedWriter = csv.DictWriter(combinedCsvfile, fieldnames=fieldnames)

        # Write headers to the 'unknown-trial4.csv' file
        writer.writeheader()

        # Read and print the serial data indefinitely
        while True:
            print("---", ser.readline().decode('utf-8'))
            data = ser.readline().decode('utf-8').strip().split(' ')[0].split(',') # Read and decode data
            print(data)
            
            # Generate random noise and write data to the 'unknown-trial4.csv' file
            dic1 = {'acc_x': float(data[0]) + random.uniform(-0.15, 0.15), 'acc_y': float(data[1]) + random.uniform(-0.15, 0.15), 'acc_z': float(data[2]) + random.uniform(-0.15, 0.15), 'gyro_x': float(data[3]) + random.uniform(-0.15, 0.15), 'gyro_y': float(data[4]) + random.uniform(-0.15, 0.15),
                    'gyro_z': float(data[5]) + random.uniform(-0.15, 0.15), 'magneto_x': float(data[6]) + random.uniform(-0.15, 0.15), 'magneto_y': float(data[7]) + random.uniform(-0.15, 0.15), 'magneto_z': float(data[8]) + random.uniform(-0.15, 0.15), 'Ground Truth': unknown}
            writer.writerow(dic1)
            
            # Write the same data to the 'dataset.csv' file
            combinedWriter.writerow(dic1)
