#	@(#)Makefile.inc	8.1 (Berkeley) 6/2/93
# $FreeBSD$

# compat-41 sources
.PATH: ${LIBC_SRCTOP}/${LIBC_ARCH}/compat-41 ${LIBC_SRCTOP}/compat-41

SRCS+=	ftime.c

SYM_MAPS+=${LIBC_SRCTOP}/compat-41/Symbol.map

MAN+=	ftime.3
