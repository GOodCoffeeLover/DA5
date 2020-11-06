CC=g++

CCFLAGS = -pedantic -Wall -std=c++11 -Werror -Wno-sign-compare -O2 -lm 
FILES = main.cpp SuffixTrie 

OUT = solution


all: solution

solution: ${FILES}
	${CC} main.cpp ${CCFLAGS} -o ${OUT}
clean:
	rm -f ${OUT}
