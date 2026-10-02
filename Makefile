CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic
TARGET = math_program

$(TARGET): main.o math_utils.o
	$(CC) main.o math_utils.o -o $(TARGET)

main.o: main.c math_utils.h
	$(CC) $(CFLAGS) -c main.c

math_utils.o: math_utils.c math_utils.h
	$(CC) $(CFLAGS) -c math_utils.c

clean:
	rm -f main.o math_utils.o $(TARGET)

.PHONY: clean
