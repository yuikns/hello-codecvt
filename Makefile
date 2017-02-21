
CC               := cc
CXX              := c++

CP               := @cp
MV               := @mv
DEL              := @rm -rf

LIBS             := #-ldl -lpthread  -lm -L lib/
INFLAGS          := #-I include/

CFLAGS            := -Wall    ${INFLAGS} -std=c99
GNUFLAGS          := -Wall    ${INFLAGS} -std=gnu99
CXXFLAGS          := -Wall    ${INFLAGS} -std=c++11

LDFLAGS           := ${LIBS}


OBJS              := main.o 
PROGS             := main


.PHONY             : main clean

main: ${OBJS}
#	${CC} -o $@ ${CFLAGS} ${LDFLAGS} ${OBJS}
	${CXX} -o $@ ${CXXFLAGS} ${LDFLAGS} ${OBJS}

${OBJS} :


clean:
	-${DEL} ${PROGS} ${OBJS}

