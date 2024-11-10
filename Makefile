CC=gcc
CFLAGS = -O3
TARGET = permute
OBJS = main.o heaps_algorithm.o
$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)
heaps_algorithm.o:heaps_algorithm.c heaps_algorithm.h
	$(CC) $(CFLAGS) -c heaps_algorithm.c
main.o:main.c heaps_algorithm.h
	$(CC) $(CFLAGS) -c main.c
.PHONY:clean
clean:
	rm *.o
