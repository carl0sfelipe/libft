SRCS	= ft_isascii.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_isdigit.c ft_strlcpy.c ft_strrchr.c main.c ft_isalnum.c ft_isprint.c ft_strlen.c ft_tolower.c strlcat.c ft_isalpha.c ft_strchr.c ft_strncmp.c ft_toupper.c teste.c

OBJS	= $(SRCS:.c=.o}

NAME	= hello

CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.c}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			
