DESCRIPTION = "The libtheora reference implementation provides the standard encoder and decoder under a BSD license."
HOMEPAGE = "http://xiph.org/"
BUGTRACKER = "https://trac.xiph.org/newticket"
LICENSE = "BSD"
DEPENDS = "libogg-dev"

inherit autotools pkgconfig

SRC_URI = "http://downloads.xiph.org/releases/theora/libtheora-${PV}.tar.bz2"

EXTRA_OECONF = "--disable-examples"
