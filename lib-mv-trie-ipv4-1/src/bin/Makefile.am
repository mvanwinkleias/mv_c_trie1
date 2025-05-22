# .POSIX might be a good idea.
.POSIX:
AM_CFLAGS = -std=c99 -pedantic -D_POSIX_C_SOURCE=200809L -Wall -Wextra -I$(top_srcdir)/src/lib
AM_LDFLAGS = -L../src/lib

# This might be how to add CPP stuff
# AM_CPPFLAGS =  -pedantic -Wall -Wextra
# AM_CPPFLAGS+= -std=c++11

# This might be how to link against a library in this project which might
# not be available with pkgconfig yet.
AM_CFLAGS += -llib-mv-trie-ipv4-1
# AM_LDFLAGS += -lsome_library

# AM_CFLAGS += -pthread
# AM_LDFLAGS += -lpthread

# === Programs ===

bin_PROGRAMS = lib-mv-trie-ipv4-1_runner
lib_mv_trie_ipv4_1_runner_SOURCES = \
	main.c

# Needed, as per:
# https://www.gnu.org/software/automake/manual/html_node/Objects-created-both-with-libtool-and-without.html
lib_mv_trie_ipv4_1_runner_CFLAGS = $(AM_CFLAGS)
# Included for completeness:
lib_mv_trie_ipv4_1_runner_LDFLAGS = $(AM_LDFLAGS)

# === End Programs ===

