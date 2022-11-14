# Makefile by SandWood Jones

PROJECT_NAME = Algorithms
INCL_DIR =./include
SRC_DIR = ./src
OBJ_DIR = ./bin
EXECUTABLE = $(OBJ_DIR)/$(shell echo $(PROJECT_NAME) | tr A-Z a-z)

CC=gcc
LIBS = -lm
CFLAGS= -g -Wall -Wextra -I$(INCL_DIR)

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

.PHONY: clean run

$(EXECUTABLE): $(OBJ_FILES)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

# for any file ending in .o in OBJ_DIR, dependent on the respective .c file and header
# compile it generating object files and output it as with the same name
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ_DIR)/*.o $(OBJ_DIR)/$(PROJECT_NAME)
	rm -rf $(OBJ_DIR)

run:
	@make -s $(EXECUTABLE) # calls make silently
	$(EXECUTABLE)

# creates the bin directory if it does not exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
