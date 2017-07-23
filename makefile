OBJS = box.o Main.o Line.o 
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
Run : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o Run
 	
Main.o : Main.cpp box.h Line.h
	$(CC) $(CFLAGS) Main.cpp
	
box.o :  box.cpp box.h Line.h
	$(CC) $(CFLAGS) box.cpp
	
Line.o : Line.cpp Line.h box.h
	$(CC) $(CFLAGS) Line.cpp
	
	
clean:	
	\rm *.o *~ Run
