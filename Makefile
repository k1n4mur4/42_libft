NAME		=	lib.a
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf
AR			=	ar rcs

SRCS_DIR	=	./srcs
LIBFT_DIR	=	$(SRCS_DIR)/libft/srcs
CTYPE_DIR	=	$(LIBFT_DIR)/ctype
LIST_DIR	=	$(LIBFT_DIR)/list
MATH_DIR	=	$(LIBFT_DIR)/math
MEMORY_DIR	=	$(LIBFT_DIR)/memory
STDIO_DIR	=	$(LIBFT_DIR)/stdio
STDLIB_DIR	=	$(LIBFT_DIR)/stdlib

GNL_DIR		=	$(SRCS_DIR)/get_next_line/srcs
PRINTF_DIR	=	./srcs/ft_printf/srcs

INCLUDES	=	./includes

SRCS		=	$(wildcard $(LIBFT_DIR)/*.c $(CTYPE_DIR)/*.c $(LIST_DIR)/*.c \
					$(MATH_DIR)/*.c $(MEMORY_DIR)/*.c $(STDIO_DIR)/*.c $(MATH_DIR)/*.c \
					$(STDLIB_DIR)/*.c $(GNL_DIR)/*.c $(PRINTF_DIR)/*.c)
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
	@echo "$(BOLD)$(LIGHT_BLUE)Linking objects...$(RESET)"
	@$(AR) $@ $^
	@echo "$(BOLD)$(LIGHT_BLUE)Create $(NAME)$(RESET)"

.c.o:
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning objects...$(RESET)"
	@$(RM) $(OBJS)
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning Complete!$(RESET)"

fclean: clean
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning $(NAME)...$(RESET)"
	@$(RM) $(NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)ALL Cleaning $(NAME) Complete!$(RESET)"

re: fclean all

.PHONY: all clean fclean re