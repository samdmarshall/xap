
TARGET = xap

DEFINES =                    \
  -DICONDIR=\"$(icondir)\"   \
  -DTERMINAL=\"kitty\"       \
  -DDATA_DIR=\"$(datadir)\"  \
  -DXAP_RC=\"$(TARGET)rc\"   \
  -DXAP_PATH=\"xap\"         \
  -DINSTDIR=\"$(bindir)\"    \
  -DHAVE_LIBGTK=1            \
  -DPLUGINDIR=\"$(datadir)\"

CFLAGS +=                                            \
  $(shell pkg-config --cflags x11 glib-2.0 gtk+-2.0) \
  $(DEFINES)                                         \
  -I$(PWD)                                           \
  -I$(PWD)/../lib-src/                               \
  -I$(PWD)/../stubs/                                 \
  $(OTHER_CFLAGS)

LDFLAGS +=                                         \
  $(shell pkg-config --libs x11 glib-2.0 gtk+-2.0) \
  -L$(PWD)/../lib-src/                             \
  -lxap                                            \
  --unresolved-symbols=ignore-all                  \
  $(OTHER_LDFLAGS)

SRC =          \
  ../stubs/gdk.c  \
  xap_gui.c    \
  xap.c

export

OBJS := $(SRC:.c=.o)

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(addprefix -Xclang ,$(CFLAGS)) $(addprefix -Xlinker ,$(LDFLAGS)) -o $@
clean:
	-rm -v $(TARGET) $(OBJS)
installdirs:
	mkdir -p {$(DESTDIR)$(bindir))}
install: installdirs
	$(INSTALL_PROGRAM) $(TARGET) $(DESTDIR)$(bindir)/$(TARGET)
uninstall:
	rm -v $(DESTDIR)$(bindir)/$(TARGET)
.PHONY: all clean install installdirs uninstall $(TARGET)
