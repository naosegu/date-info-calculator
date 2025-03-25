CC = g++
CFLAGS = -Wall -std=c++17 -Iinc
SRC = src/main.cpp src/DateInfo.cpp src/ZodiacCalculator.cpp src/DisplayManager.cpp
TARGET = dateinfo

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)
