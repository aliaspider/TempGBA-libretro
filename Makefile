TARGET      := TempGBA_libretro_psp1.a
DEBUG       := 1
CC  = psp-gcc
AR  = psp-ar

CFLAGS  += -D__LIBRETRO__ -DPSP

CFLAGS  += -D_PSP_FW_VERSION=371

ifeq ($(DEBUG), 1)
	CFLAGS += -O0 -g
else
	CFLAGS += -O2
endif

CFLAGS   += -G0

CFLAGS   += -march=allegrex -mfp32 -mgp32 -mlong32 -mabi=eabi
CFLAGS   += -fomit-frame-pointer -fstrict-aliasing
CFLAGS   += -falign-functions=32 -falign-loops -falign-labels -falign-jumps
CFLAGS   += -Wall -Wundef -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Wmissing-prototypes -Wsign-compare
#CFLAGS   += -Werror


OBJS := cpu.o mips_stub.o message.o zip.o libretro.o input.o
OBJS += main.o memory.o video.o sound.o

INCDIRS := -I.
INCDIRS += -I$(shell psp-config --pspsdk-path)/include
#INCDIRS += -I$(shell psp-config --psp-prefix)/include

all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) rcs $@ $(OBJS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS) $(INCDIRS)

clean-objs:
	rm -f $(OBJS)

clean:
	rm -f $(OBJS)
	rm -f $(TARGET)

.PHONY: clean clean-objs



