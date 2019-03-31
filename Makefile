
VERSION = 0.9.7
CC      = clang

CFLAGS  = -x c -g -Wall -Wshadow -Wno-unused-command-line-argument -I$(PWD)
LDFLAGS = -g

prefix     ?= $(HOME)/.local
bindir     ?= $(prefix)/bin
libdir     ?= $(prefix)/lib
includedir ?= $(prefix)/include
datadir    ?= $(prefix)/share
mandir     ?= $(datadir)/man
icondir    ?= $(datadir)/icons


INSTALL_PROGRAM = $(INSTALL)
INSTALL_DATA    = $(INSTALL) -m 644
export

TARGETS = libxap.so xap xat xcp xfi xpg

all: $(TARGETS)
clean: $(TARGETS)
installdirs: $(TARGETS)
install: installdirs $(TARGETS)
uninstall: $(TARGETS)
libxap.so:
	cd lib-src/ && $(MAKE) $(MAKECMDGOALS) $(MAKEFLAGS)
xap:
	cd xap-src/ && $(MAKE) $(MAKECMDGOALS) $(MAKEFLAGS)
xat:
	cd xat-src/ && $(MAKE) $(MAKECMDGOALS) $(MAKEFLAGS)
xcp:
	cd xcp-src/ && $(MAKE) $(MAKECMDGOALS) $(MAKEFLAGS)
xfi:
	cd xfi-src/ && $(MAKE) $(MAKECMDGOALS) $(MAKEFLAGS)
xpg:
	cd xfi-src/ && $(MAKE) $(MAKECMDGOALS) $(MAKEFLAGS)

.PHONEY: all clean installdirs install uninstall $(TARGETS)
