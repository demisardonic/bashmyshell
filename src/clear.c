/*
clear
Clears the current terminal and exits
puts declaration instead of header include to reduce executable size
2J is the ANSI escape code for clear screen and return cursor
H is the ANSI escape code to reset cursor to top left
*/
int puts(const char *);
int main(void){
  puts("\x1b[2J");
  puts("\x1b[H");
}
