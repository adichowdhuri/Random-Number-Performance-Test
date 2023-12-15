import scipy.stats as stats
import csv

# Define the range of the random numbers
min_val = 0
max_val = 32676

# Define the number of random numbers to generate
num_values = 100000

# Generate the random numbers
random_numbers = stats.randint.rvs(min_val, max_val+1, size=num_values)

# Define the CSV file name
csv_file_name = 'sci_py_random_numbers.csv'

# Write the random numbers to the CSV file
with open(csv_file_name, 'w', newline='') as csvfile:
    writer = csv.writer(csvfile)
    for number in random_numbers:
        writer.writerow([number])