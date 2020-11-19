CC = g++
CFLAGS = -Wall -Wextra -Wconversion -O2 -std=c++11
TARGET = main

all: main.cpp
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp	

base: main.cpp
	$(CC) -o $(TARGET) main.cpp

reset: clean
	cat main.cpp >> ./Temporaries/buff.cpp
	git checkout main.cpp

clean:
	rm -f $(TARGET)