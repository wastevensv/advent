TARGET=main
SOURCES := $(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)

CFLAGS=-Wall -std=c99

run: all
	./$(TARGET)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	cc -s $(CFLAGS) -o $(TARGET) $(OBJECTS)

debug: $(OBJECTS)
	cc -g $(CFLAGS) -o $(TARGET) $(OBJECTS)

clean:
	rm -v *.o $(TARGET)

.c.o:
	cc -c -g $(CFLAGS) $< -o $@
