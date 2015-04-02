.PHONY : clean

CC = gcc
TARGET = sum
OBJS = main.o cal.o
RM = rm -rf

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

main.o : main.c
	$(CC) -c main.c -o main.o

cal.o : cal.c
	$(CC) -c cal.c -o cal.o

clean:
	$(RM) $(OBJS) $(TARGET)
