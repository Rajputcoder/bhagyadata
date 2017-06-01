
SHELL = /bin/sh
OBJS = main.o factorial.o hello.o
CFLAG = -Wall -g
CXX = g++
INCLUDE =
LIBS = -lm

hello:${OBJS}
	${CXX} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

clean:
	-rm -f *.o core *.core hello

.cpp.o:
	${CXX} ${CFLAGS} ${INCLUDES} -c $<

