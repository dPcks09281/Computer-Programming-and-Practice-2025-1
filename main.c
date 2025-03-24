void add_to_format(char c);


void print_formatted(char a, char b);


char input_char();

int main() {
char c=input_char();
add_to_format('%');
add_to_format('c');
add_to_format(':');
add_to_format('%');
add_to_format('d');
print_formatted(c,c);
	return 0;
}
