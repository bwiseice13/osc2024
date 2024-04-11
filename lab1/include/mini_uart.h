#ifndef	_MINI_UART_H
#define	_MINI_UART_H

char *int2hex(int value, char *s);
void uart_init ( void );
char uart_recv ( void );
void uart_send ( char c );
void uart_send_string(char* str);
void uart_send_string_int2hex(unsigned int value);

#endif  /*_MINI_UART_H */