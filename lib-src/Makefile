
TARGET = libxap.so

DEFINES =

CFLAGS +=                                            \
  -fpic                                              \
  $(shell pkg-config --cflags x11 glib-2.0 gtk+-2.0) \
  $(DEFINES)                                         \
  $(OTHER_CFLAGS)

LDFLAGS +=                                         \
  $(shell pkg-config --libs x11 glib-2.0 gtk+-2.0) \
  $(OTHER_LDFLAGS)

SRC =          \
  adouble.c    \
  entry.c      \
  gtk_dlg.c    \
  gtk_dnd.c    \
  gtk_exec.c   \
  gtk_util.c   \
  io.c         \
  lnk_opt.c    \
  lnk.c        \
  mailcap.c    \
  reg.c        \
  uri.c        \
  xap_fs.c

export

OBJS := $(SRC:.c=.o)

all: $(TARGET)
$(TARGET): $(OBJS)
	$(LD) $(OBJS) -shared $(LDFLAGS) -o $@
clean:
	-rm -v $(TARGET) $(OBJS)
installdirs:
	mkdir -p {$(DESTDIR)$(libdir)}
install: installdirs
	$(INSTALL_PROGRAM) $(TARGET) $(DESTDIR)$(bindir)/$(TARGET)
uninstall:
	rm -v $(DESTDIR)$(bindir)/$(TARGET)
.PHONY: all clean install installdirs uninstall $(TARGET)
