

void f(int i){
	print_int(i);
	print_char(':');
	print_char(i);
	print_char('\n');

}
int main(){
	repeat_f(&f);
	return 0;
}
