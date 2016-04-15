#ifndef GHOST_STEGGER_H
#define GHOST_STEGGER_H

#include "sampler.h"
#include "util.h"

struct stegger {
	long capacity;

	int (*read)(struct stegger *self, void *buf, size_t size, size_t offset);
	int (*write)(struct stegger *self, const void *buf, size_t size, size_t offset);
};

static inline int stegger_read(struct stegger *self, void *buf, size_t size, size_t offset)
{
	return self->read(self, buf, size, offset);
}

static inline int stegger_write(struct stegger *self, const void *buf, size_t size, size_t offset)
{
	return self->write(self, buf, size, offset);
}

#endif
