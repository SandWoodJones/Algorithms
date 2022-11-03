CC=gcc
CFLAGS= -g -Wall -I$(IDIR)


IDIR =./include
_DEPS = algorithms.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS)) # Adds the full path to the headers in _DEPS

SDIR = ./src

ODIR = ./bin
_OBJ = main.o mean.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

# for any file ending in .o in ODIR, dependent on the respective .c file and header
# compile it generating object files and output it as with the same name
$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

algorithms: $(OBJ)
	$(CC) -o $(ODIR)/$@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(ODIR)/algorithms
