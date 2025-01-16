import serial

# Configure the serial port
ser = serial.Serial('COM6', 115200)  # Change 'COM1' to your serial port and 9600 to your baud rate

# Create a variable to store the received data
data = []

try:
    while True:
        # Read a line of data from the serial port
        line = ser.readline()
        data.append(line.decode('utf-8').strip())  # Append the received line to the data list
        print(line.decode('utf-8').strip())  # Print the received line

except KeyboardInterrupt:
    # Ask the user for a file name to save the data
    file_name = input("Enter a file name to save the data: ")

    # Save the data to a file
    with open(file_name, 'w') as file:
        for line in data:
            file.write(line + '\n')

    print(f"Data saved to {file_name}")

finally:
    # Close the serial port
    ser.close()
