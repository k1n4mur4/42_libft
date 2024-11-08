NAME		=	libft.a
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf
AR			=	ar rcs

SRCS_DIR	=	./srcs

CTYPE_DIR	=	$(SRCS_DIR)/ctype
FREE_DIR	=	$(SRCS_DIR)/free
GNL_DIR		=	$(SRCS_DIR)/get_next_line
LIST_DIR	=	$(SRCS_DIR)/list
MATH_DIR	=	$(SRCS_DIR)/math
MEMORY_DIR	=	$(SRCS_DIR)/memory
STDIO_DIR	=	$(SRCS_DIR)/stdio
STDLIB_DIR	=	$(SRCS_DIR)/stdlib
STRING_DIR	=	$(SRCS_DIR)/string

INCLUDES	=	-I ./includes

UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S), Darwin)
	MAC_DIR		=	./mac
	MSRCS_DIR	=	$(MAC_DIR)/srcs
	PRINTF_DIR	=	$(MSRCS_DIR)/ft_printf
	INCLUDES	+=	-I $(MAC_DIR)/includes
else
	LINUX_DIR	=	./linux
	LSRCS_DIR	=	$(LINUX_DIR)/srcs
	PRINTF_DIR	=	$(LSRCS_DIR)/ft_printf
	INCLUDES	+=	-I $(LINUX_DIR)/includes
endif

PRINTF_SRCS	=	$(PRINTF_DIR)/ft_dprintf.c \
				$(PRINTF_DIR)/ft_fputi.c \
				$(PRINTF_DIR)/ft_fputs.c \
				$(PRINTF_DIR)/ft_fputx.c \
				$(PRINTF_DIR)/ft_uitoa_base.c \
				$(PRINTF_DIR)/ft_vdprintf.c \
				$(PRINTF_DIR)/ft_fputc.c \
				$(PRINTF_DIR)/ft_fputp.c \
				$(PRINTF_DIR)/ft_fputu.c \
				$(PRINTF_DIR)/ft_printf.c \
				$(PRINTF_DIR)/ft_ulltoa_base.c \
				$(PRINTF_DIR)/ft_vprintf.c \

COMMON_SRCS	=	$(wildcard $(SRCS_DIR)/*.c $(CTYPE_DIR)/*.c $(FREE_DIR)/*.c $(LIST_DIR)/*.c $(MATH_DIR)/*.c \
					$(MEMORY_DIR)/*.c $(STDIO_DIR)/*.c $(MATH_DIR)/*.c $(STDLIB_DIR)/*.c \
					$(GNL_DIR)/*.c $(STRING_DIR)/*.c $(GNL_DIR)/*.c)

SRCS		=	$(COMMON_SRCS) $(PRINTF_SRCS)
OBJS		=	$(SRCS:.c=.o)

RESET		=	\033[0m
BOLD		=	\033[1m
DIM			=	\033[2m
UNDERLINE	=	\033[4m
BLINK		=	\033[5m
INVERT		=	\033[7m
LIGHT_BLUE	=	\033[94m
YELLOW		=	\033[93m

MAKEFLAGS	+=	--no-print-directory

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(BOLD)$(LIGHT_BLUE)Linked objects$(RESET)"
	@$(AR) $@ $^
	@echo "$(BOLD)$(LIGHT_BLUE)Create $(NAME)$(RESET)"

.c.o:
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning objects...$(RESET)"
	@$(RM) $(OBJS)
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning Complete!$(RESET)"

fclean:
	@echo "$(BOLD)$(LIGHT_BLUE)ALL Cleaning $(NAME)...$(RESET)"
	@$(RM) $(OBJS) $(NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)ALL Cleaning $(NAME) Complete!$(RESET)"

re: fclean all

.PHONY: all clean fclean re