
CC = clang
CFLAGS = -Wall -Wextra -std=c11 -g

TARGET = main
OBJS = main.o quicksort.o 

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c menu.h
	$(CC) $(CFLAGS) -c main.c

quicksort.o: quicksort.c menu.h
	$(CC) $(CFLAGS) -c quicksort.c

.PHONY: all clean
clean:
	rm -f $(TARGET) *.o

