#include <stddef.h>
void *swr_alloc(void) { return NULL; }
int swr_init(void *s) { return -1; }
int swr_is_initialized(void *s) { return 0; }
void swr_close(void *s) {}
void swr_free(void **s) { if (s) *s = NULL; }
int swr_convert(void *s, unsigned char **o, int oc, const unsigned char **i, int ic) { return -1; }
