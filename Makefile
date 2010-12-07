
all: program

program: program.o fortranside.o

program.o: fortranside.h

fortranside.o: fortranside.f
	gfortran -c fortranside.f
