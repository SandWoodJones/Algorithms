PROJECT_NAME = algorithms

INCL_DIR =./include
DEPS = $(wildcard $(INCL_DIR)/*.h) # Gets all header files in INCL_DIR

CC=gcc
CFLAGS= -g -Wall -I$(INCL_DIR)

SRC_DIR = ./src
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

OBJ_DIR = ./bin
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))
#OBJ = $(patsubst %,$(OBJ_DIR)/%,$(_OBJ))

all: $(OBJ)
	$(CC) -o $(OBJ_DIR)/$(PROJECT_NAME) $^ $(CFLAGS)

# for any file ending in .o in ODIR, dependent on the respective .c file and header
# compile it generating object files and output it as with the same name
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(DEPS)
	mkdir -p $(OBJ_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ_DIR)/*.o $(OBJ_DIR)/$(PROJECT_NAME)
