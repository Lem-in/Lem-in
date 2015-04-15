/*
** my_lib.h for my_lib.h in /home/perrie_s/Lib/Inc
**
** Made by Simon PERRIERE
** Login   <perrie_s@epitech.net>
**
** Started on  Wed Dec 17 17:24:57 2014 Simon PERRIERE
** Last update Tue Apr 14 18:02:15 2015 jessica van-den-zande
*/

#ifndef MY_LIB_H_
# define MY_LIB_H_

/*
** Include Lib C
*/

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <string.h>

/*
** Define Over Type
*/

# define INT_OVER_P	2147483647
# define INT_OVER_N	-2147483648
# define CHAR_MIN	0
# define CHAR_MAX	128
# define CHAR_PRINT_MIN	32
# define CHAR_PRINT_MAX 127
# define CHAR_MAX_EXT	256
# define DEC_MIN	48
# define DEC_MAX	57

/*
** Define Base
*/

# define BINARY		"01"
# define OCTAL		"01234567"
# define DECIMAL	"0123456789"
# define HEX_MIN	"0123456789abcdef"
# define HEX_CAP	"0123456789ABCDEF"

/*
** Define Flag for my_printf.c
*/

# define FLAG		"cduxXboSsl"

/*
** Define for my_reed.c
*/

# define SREAD		1024
# define MEMORY_CAP	16384
# define BLANK		""

/*
** Prototype for my_putstr.c
*/

int		my_putchar(int, char);
int		my_putstr(int, char *);
int		my_put_ustr(int, char *);
int		my_put_line(int, char *);
int		my_strlen(char *);
int		my_len_line(char *);

/*
** Prototype for my_putnbr.c
*/

int		my_putnbr(int, int);
int		my_put_unbr(int, unsigned int);
int		my_putnbr_base(int, int, char *);
int		my_put_unbrbase(int, unsigned int, char *);
int		my_check_base(char *);

/*
** Protoype for my_strcmp.c
*/

int		my_strcmp(char *, char *);
int		my_strncmp(char *, char *, int);
char		*my_strstr(char *, char *);
char		*my_strnstr(char *, char *, int);
char		*my_find_char(char *, char, int);

/*
** Prototype for my_strcpy.c
*/

char		*my_strcpy(char *, char *);
char		*my_strncpy(char *, char *, int);
char		*my_strlcpy(char *, char *, int);
char		*my_strlncpy(char *, char *, int, int);

/*
** Prototype for my_strdup.c
*/

char		*my_strdup(char *);
char		*my_strfdup(char *);
char		*my_strndup(char *, int);
char		*my_strldup(char *, int);
char		*my_strlndup(char *, int, int);

/*
** Prototype for my_str_catdup.c
*/

char		*my_str_catdup(char *, char *);
char		*my_str_fcatdup(char *, char *);
char		*my_str_ncatdup(char *, char *, int);
char		*my_str_lcatdup(char *, char *, int);
char		*my_str_lncatdup(char *, char *, int, int);

/*
** Prototype for my_sort_str.c
*/

char		*my_sort_ascii(char *);
char		*my_sort_invascii(char *);
char		*my_revstr(char *);

/*
** Prototype for my_getnbr.c
*/

int		my_getnbr(char *);
int		my_getnbr_base(char *, char *);
int		my_find_rank(char, char *);
int		my_check_conv(char *, char *);

/*
** Prototype for my_ptf_one.c (for my_printf.c)
*/

int		my_ptf_pchar(int, va_list);
int		my_ptf_pnbr(int, va_list);
int		my_ptf_punbr(int, va_list);
int		my_ptf_phex(int, va_list);
int		my_ptf_pchex(int, va_list);

/*
** Prototype for my_ptf_one.c (for my_printf.c)
*/

int		my_ptf_pubin(int, va_list);
int		my_ptf_puoct(int, va_list);
int		my_ptf_pustr(int, va_list);
int		my_ptf_pstr(int, va_list);
int		my_ptf_pline(int, va_list);

/*
** Prototype for my_printf.c
*/

int		my_check_put(int, char, va_list, char *);
int		my_printf(char *, ...);
int		my_dprintf(int, char *, ...);

/*
** Prototype for my_power.c
*/

int		my_long_to_int(long);
int		my_power(int, int);

/*
** Prototype for my_reed.c
*/

char		*my_read(int, char *, int);
char		*my_read_dup(int, int);
char		*my_read_catdup(int, char *, int);
char		*my_readline(int, char *, int);
int		my_check_line(char *, char *);

/*
** Prototype for my_get_next_line.c
*/

char		*my_cut_line(char *);
char		*my_get_line(char *);
char		*my_get_next_line(int);

#endif /* !MY_LIB_H_ */
