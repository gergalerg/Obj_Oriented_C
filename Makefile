GCC=gcc
CFLAGS=-g -Wall -std=c11
TARGET=main
SOURCES:=main.c new.c
DEPS:=new.h Point.h
# Math libraries
# MATH:=-lm
OBJECTS:=$(SOURCES:.c=.o)

%.o: %.c
	@echo "Making objects! Input = " $< "OUtput = " $@
	$(GCC) $(CFLAGS) -c $< -o $@

.PHONY: all
all: $(OBJECTS)
	$(GCC) $(CFLAGS) $(OBJECTS) -o $(TARGET) 

.PHONY: clean
clean:
	rm $(TARGET) $(OBJECTS)
