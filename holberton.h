int _printf(const char *format, ...);
int printchar(char c);
int print_string(char *c);
typedef struct specifiers
{
	char dir;
	int (*f)();
}specifiers_t;

