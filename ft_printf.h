#ifndef name of
# define name of

#include <libft.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>
#include <limits.h>

#define BUF_SIZE	(1<<12)

typedef struct s_format
{
	bool	left_justified;
	bool	plus;
	bool	space;
	bool	hash;
	bool	zero_pad;
	char	specifier;
	int	width_value;
	int	precision_value;
}		t_format;

typedef	struct s_data
{
	// pointer copy to string
	const char	*s;
	va_list		ap;
	int	chars_written;
	char	*buf;
	int	buffer_index;
	t_format	format;
}		t_data;


#endif
