#include <gtk/gtk.h>
#include <sys/time.h>

struct timeval start;

void gdk_time_init(void);
guint32 gdk_time_get(void);
