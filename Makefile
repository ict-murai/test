CC = gcc
CFLAGS = -Wall -O -lm
TARGET = main
SRCS = main.c
LDFLAGS = 
$(TARGET): $(SRCS)

main:main.c
	gcc -Wall -0 -o main main.c -lm
clean:
	rm main *~
