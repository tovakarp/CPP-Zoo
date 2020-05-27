CC=g++

INC_FLAGS=-I../include 
CFLAGS= -g -pedantic -Wall -Werror -Wconversion -ansi $(INC_FLAGS)
CXXFLAGS=$(CFLAGS) 
LDFLAGS=-g


SOURCES=$(wildcard *.cpp)

OBJS=$(SOURCES:.cpp=.o) 
TARGET=zoo 
 
$(TARGET): $(OBJS) 

.PHONY: clean run gdb

include .depends
.depends:
	$(CC) -MM -I$(INC_DIR) $(SOURCES) > .depends 

clean:
	rm -f $(OBJS) $(TARGET) .depends

run: $(TARGET)
	./$(TARGET) 


gdb: $(TARGET)
	gdb -q ./$(TARGET) 

valgrind: $(TARGET)
	valgrind ./$(TARGET)

