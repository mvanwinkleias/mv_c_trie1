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
	lib-mv-trie-ipv4-1.h

include_HEADERS = lib-mv-trie-ipv4-1.h

liblib_mv_trie_ipv4_1_la_LDFLAGS = -version-info 0:0:0

# -Wl,--version-script=lib-mv-trie-ipv4-1.map

# === End Libraries ===
