
#include "gdk.h"
#include <X11/Xlib.h>

#define X_GETTIMEOFDAY(tv) gettimeofday(tv, NULL)

void gdk_time_init(void) { X_GETTIMEOFDAY(&start); }

guint32 gdk_time_get(void) {
  struct timeval end;
  struct timeval elapsed;
  guint32 milliseconds;

  X_GETTIMEOFDAY(&end);

  if (start.tv_usec > end.tv_usec) {
    end.tv_usec += 1000000;
    end.tv_sec--;
  }
  elapsed.tv_sec = end.tv_sec - start.tv_sec;
  elapsed.tv_usec = end.tv_usec - start.tv_usec;

  milliseconds = (elapsed.tv_sec * 1000) + (elapsed.tv_usec / 1000);

  return milliseconds;
}
