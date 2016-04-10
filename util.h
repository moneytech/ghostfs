#ifndef GHOST_UTIL_H
#define GHOST_UTIL_H

#include <stddef.h>

#define container_of(obj, type, member) ((type *)((char *)obj - (char *)offsetof(type, member)))

struct ghostfs;
struct sampler;

int open_sampler(struct sampler *sampler, const char *filename);
int try_mount_lsb(struct ghostfs **pgfs, struct sampler *sampler);

#endif
