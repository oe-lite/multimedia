DESCRIPTION = "GNU dbm is a set of database routines that use extensible hashing."
HOMEPAGE = "http://www.gnu.org/software/gdbm/"
SECTION = "libs"
PRIORITY = "optional"
LICENSE = "GPLv2+"

BBCLASSEXTEND = "native sdk"
inherit autotools

SRC_URI = "ftp://ftp.gnu.org/ftp/gdbm/gdbm-${PV}.tar.gz \
	   	file://makefile.patch \
           file://libtool-mode.patch"

