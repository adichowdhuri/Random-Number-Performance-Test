import random
import csv

# Define the range of the random numbers
min_val = 0
max_val = 32767

# Define the number of random numbers to generate
num_values = 100000

# Generate the random numbers
random_numbers = [random.randint(min_val, max_val) for _ in range(num_values)]

# Define the CSV file name
csv_file_name = 'random_numbers.csv'

# Write the random numbers to the CSV file
with open(csv_file_name, 'w', newline='') as csvfile:
    writer = csv.writer(csvfile)
    for number in random_numbers:
        writer.writerow([number])
