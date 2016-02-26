## Chester, Titan
#FC=ftn
#CC=cc
## Rhea, Sith
#FC=mpif90
CC=mpicc

#ADIOS_DIR = /opt/adios/1.6.0
ADIOS_INC = /opt/include
ADIOS_CLIB = -L/opt/lib -ladios -lm -lmxml 
ADIOS_FLIB = -L/opt/lib -ladiosf -lm -lmxml
ADIOSREAD_SEQ_CLIB = -L/opt/lib -ladiosread_nompi -lm 
GPP = /opt/bin/gpp.py


default: all
all: read_moments

read_moments: read_moments.c 
	${CC} -g -c -o read_moments.o ${ADIOS_INC} read_moments.c
	${CC} -g -o read_moments read_moments.o ${ADIOS_CLIB}

clean:
	rm -f read_moments read_moments.o

