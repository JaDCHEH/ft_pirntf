NAME = libftprintf.a

CC = @cc

AR = @ar -r

FLAGS = -Wall -Wextra -Werror -c

RM = @rm -f

CFILES = ft_numlen.c \
			ft_putchar.c \
			ft_putnbr_hexa_low.c \
			ft_putnbr.c \
			ft_putnbr_hexa_upp.c \
			ft_putnbr_unsigned.c \
			ft_putptr.c \
			ft_putstr.c \
			ft_conversion.c \
			ft_printf.c \
			ft_hexnum_len.c \

OFILES = ft_numlen.o \
			ft_putchar.o \
			ft_putnbr_hexa_low.o \
			ft_putnbr.o \
			ft_putnbr_hexa_upp.o \
			ft_putnbr_unsigned.o \
			ft_putptr.o \
			ft_putstr.o \
			ft_conversion.o \
			ft_printf.o \
			ft_hexnum_len.o \

all : $(NAME)

$(NAME) : $(OFILES)
	$(CC) $(FLAGS) $(CFILES)
	$(AR) $(NAME) $(OFILES)	

clean :
	$(RM) $(OFILES)

fclean : clean
	$(RM) $(NAME)

re : fclean all