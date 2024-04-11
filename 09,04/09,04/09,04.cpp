//первое задание
/*def filter_words(input_file, output_file):
    with open(input_file, 'r') as file:
        words = file.read().split()

    long_words = [word for word in words if len(word) >= 7]

    with open(output_file, 'w') as file:
        file.write(' '.join(long_words))

input_file = 'input.txt'
output_file = 'output.txt'

filter_words(input_file, output_file)
*/
//второе задание
/*def copy_lines(input_file, output_file):
    with open(input_file, 'r') as infile:
        with open(output_file, 'w') as outfile:
            for line in infile:
                outfile.write(line)

input_file = 'input.txt'
output_file = 'output.txt'

copy_lines(input_file, output_file)
*/