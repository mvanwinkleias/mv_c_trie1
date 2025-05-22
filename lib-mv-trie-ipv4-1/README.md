# Hello world

## Usage in another autotools project

Let's say you named this library 'nani3'.

To use this library in another project, here's what you'd add:

```
configure.ac:PKG_CHECK_MODULES([NANI],[nani3])
src/Makefile.am:household1_CFLAGS = $(NANI_CFLAGS) 
src/Makefile.am:household1_LDADD = $(NANI_LIBS)
src/main.c:#include <nani3.h>
src/main.c:     nani3_hello();
```

## Getting Started

The target, initialize_project, in ExtraMakefile, has already been run for you.

```
# To build:
./configure
make
```

# To make a Debian Package

```
make -f ExtraMakefile test_project_build
```

