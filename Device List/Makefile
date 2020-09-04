.PHONY: clean

CFLAGS  := -Wall -Werror -g -O0
LD      := gcc
LDFLAGS := ${LDFLAGS} -libverbs

APPS    := ibv_devices

all: ${APPS}

ibv_devices: device_list.o
	${LD} -o $@ $^ ${LDFLAGS}

clean:
	rm -f *.o ${APPS}

