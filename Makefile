PROJECT_NAME = Algorithms
INCL_DIR =./include
SRC_DIR = ./src
OBJ_DIR = ./bin
EXECUTABLE = $(OBJ_DIR)/$(shell echo $(PROJECT_NAME) | tr A-Z a-z)

CC=gcc
CFLAGS= -g -Wall -I$(INCL_DIR)

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

.PHONY: clean run

$(EXECUTABLE): $(OBJ_FILES)
	echo $(EXECUTABLE)
	$(CC) -o $@ $^ $(CFLAGS)

# for any file ending in .o in OBJ_DIR, dependent on the respective .c file and header
# compile it generating object files and output it as with the same name
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ_DIR)/*.o $(OBJ_DIR)/$(PROJECT_NAME)
	rm -rf $(OBJ_DIR)

run: $(EXECUTABLE)
	$^
