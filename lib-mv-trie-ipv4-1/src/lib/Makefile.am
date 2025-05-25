# These might be a good idea
.POSIX:
AM_CFLAGS = -std=c99 -pedantic -D_POSIX_C_SOURCE=200809L -Wall -Wextra
AM_LDFLAGS = 

# This might be how to add CPP stuff
# AM_CPPFLAGS =  -pedantic -Wall -Wextra
# AM_CPPFLAGS+= -std=c++11

# This might be how to link against things:
# AM_CFLAGS += -llib-mv-trie-ipv4-1
# AM_LDFLAGS += -lsome_library


# === Libraries ===
# Libraries that are generated and to be installed by this:
pkgconfigdir = ${libdir}/pkgconfig
pkgconfig_DATA = lib-mv-trie-ipv4-1.pc

lib_LTLIBRARIES = liblib-mv-trie-ipv4-1.la

liblib_mv_trie_ipv4_1_la_SOURCES = \
	lib-mv-trie-ipv4-1.c \
	lib-mv-trie-ipv4-1.h \
	lib-mv-trie-ipv4-1.map 

include_HEADERS = lib-mv-trie-ipv4-1.h

# If we don't initialize this, we can't use += later, so
# we just assume this is the only place where this variable is initailzed.
liblib_mv_trie_ipv4_1_la_LDFLAGS = ''
# You can use ```objdump -T``` to check the version info of the symbols of the resulting
# .so file(s)

# This is how to use ldd version scripts for the ABI.
# See
# * https://www.gnu.org/software/gnulib/manual/html_node/LD-Version-Scripts.html
liblib_mv_trie_ipv4_1_la_LDFLAGS += -Wl,--version-script=$(srcdir)/lib-mv-trie-ipv4-1.map



# === End Libraries ===
