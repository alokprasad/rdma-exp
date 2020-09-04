.PHONY: clean

CFLAGS  := -Wall -Werror -g
LD      := gcc
LDFLAGS := ${LDFLAGS} -libverbs

APPS    := ibv_basic_recv

all: ${APPS}

ibv_basic_recv: basic_recv.c
	${LD} -o $@ $^ ${LDFLAGS}

clean:
	rm -f *.o ${APPS}
