# Makefile for Old-CPP Module 04 ex03, updated Wed Nov 17 11:32:08 JST 2021

SRC := AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
OBJ := AMateria.o Character.o Cure.o Ice.o MateriaSource.o main.o

# DO NOT ADD OR MODIFY ANY LINES ABOVE THIS -- run 'make source' to add files

NAME    := interface_recap

CC      := g++ -g
CFLAGS  := -Wall -Wextra -Werror -std=c++98 --pedantic
RM      := rm -fr

SRC_DIR := ./
OBJ_DIR := obj
SRCS    := $(addprefix $(SRC_DIR)/, $(SRC))
OBJS    := $(addprefix $(OBJ_DIR)/, $(OBJ))
HEADERS := $(shell find . -type f -name '*.hpp' -print)

.PHONY:	all
all: $(NAME)

# Linking
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^

# Compiling
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: lint
lint:
	cpplint $(SRC) $(HEADERS)

.PHONY: leak
leak: CFLAGS += -g -fsanitize=leak
leak: re

.PHONY: address
address: CFLAGS += -g -fsanitize=address
address: re

.PHONY: thread
thread: CFLAGS += -g -fsanitize=thread
thread: re

.PHONY: memory
memory: CFLAGS += -g -fsanitize=memory
memory: re

.PHONY: clean
clean:
	$(RM) Makefile.bak $(NAME).dSYM $(OBJ_DIR)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

.PHONY: valgrind
valgrind: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: test
test: re
	./$(NAME)

.PHONY: source
source:
	@mv Makefile Makefile.bak
	@echo "# Makefile for Old-CPP Module 04 ex03, updated `date`" >> Makefile
	@echo '' >> Makefile
	@echo SRC := `ls *.cpp` >> Makefile
	@echo OBJ := `ls *.cpp | sed s/cpp$$/o/` >> Makefile
	@echo '' >> Makefile
	@sed -n -e '/^# DO NOT ADD OR MODIFY/,$$p' < Makefile.bak >> Makefile
