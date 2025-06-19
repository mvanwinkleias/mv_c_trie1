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

check_PROGRAMS = testlib-mv-trie-ipv4-1 
testlib_mv_trie_ipv4_1_SOURCES = \
	testlib-mv-trie-ipv4-1.c
TESTS = $(check_PROGRAMS)

# Needed, as per:
# https://www.gnu.org/software/automake/manual/html_node/Objects-created-both-with-libtool-and-without.html
testlib_mv_trie_ipv4_1_CFLAGS = $(AM_CFLAGS)
testlib_mv_trie_ipv4_1_LDFLAGS = $(AM_LDFLAGS)

# === End Programs ===

