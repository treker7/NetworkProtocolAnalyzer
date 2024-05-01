#Makefile for networking programs

CC=gcc
CFLAGS=-m64 -O1 -Wall
LIBS=-lpcap

all: arpredir cap_dump httptest rc4test sendudp simple_server

clean:
	rm *.o

arpredir: arpredir.c
	$(CC) $(CFLAGS) -o arpredir arpredir.c ../utils/utils.o ../utils/netutils.o $(LIBS)

fsend: fsend.c
	$(CC) $(CFLAGS) -o fsend fsend.c ../utils/utils.o ../utils/netutils.o rc4 $(LIBS)

cap_dump: cap_dump.c
	$(CC) $(CFLAGS) -o cap_dump cap_dump.c ../utils/utils.o ../utils/netutils.o $(LIBS)

httptest: httptest.c
	$(CC) $(CFLAGS) -o httptest httptest.c ../utils/utils.o ../utils/netutils.o $(LIBS)

rc4test: rc4test.c
	$(CC) $(CFLAGS) -o rc4test rc4test.c rc4.c ../utils/utils.o

sendudp: sendudp.c
	$(CC) $(CFLAGS) -o sendudp sendudp.c ../utils/utils.o ../utils/netutils.o $(LIBS)

simple_server: simple_server.c
	$(CC) $(CFLAGS) -o simple_server simple_server.c ../utils/utils.o
