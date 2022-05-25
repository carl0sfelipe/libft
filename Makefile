SRCS	= ft_isascii.c \
		  ft_strlcat.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_isdigit.c \
		  ft_strlcpy.c \
		  ft_isalnum.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_tolower.c \
		  ft_isalpha.c \
		  ft_strchr.c \
		  ft_strncmp.c \
		  ft_toupper.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror



${NAME}:
	${CC} ${CFLAGS} -c ${SRCS}
	ar -rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
	${RM} ${NAME} *.c

re: clean all


