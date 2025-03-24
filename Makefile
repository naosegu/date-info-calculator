CC = g++
CFLAGS = -Wall -std=c++17
SRC = src/main.cpp
TARGET = dateinfo

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)
