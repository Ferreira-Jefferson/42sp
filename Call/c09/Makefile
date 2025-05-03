# Diretórios
SRCDIR = srcs
INCDIR = includes
OBJDIR = objs

# Arquivos de origem
SRC = $(SRCDIR)/ft_putchar.c \
      $(SRCDIR)/ft_swap.c \
      $(SRCDIR)/ft_putstr.c \
      $(SRCDIR)/ft_strlen.c \
      $(SRCDIR)/ft_strcmp.c

# Arquivos de objeto correspondentes
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Nome da biblioteca
LIBFT = libft.a

# Flags do compilador
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Regras do Makefile
all: $(LIBFT)

$(LIBFT): $(OBJ)
	@echo "Criando a biblioteca libft.a..."
	@ar rcs $@ $^
	@echo "Biblioteca libft.a criada com sucesso!"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)  # Cria o diretório objs, se não existir
	@echo "Compilando $<..."
	@$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	@echo "Removendo arquivos objeto..."
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "Removendo a biblioteca libft.a..."
	@rm -f $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
