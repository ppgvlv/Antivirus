CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c MyLibraryFunctions.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=a

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)
