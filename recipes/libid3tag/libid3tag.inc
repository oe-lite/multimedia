DESCRIPTION = "Library for interacting with ID3 tags."
HOMEPAGE = "http://sourceforge.net/projects/mad/"
BUGTRACKER = "http://sourceforge.net/tracker/?group_id=12349&atid=112349"
LICENSE = "GPL-2.0+"

inherit autotools pkgconfig library

SRC_URI = "ftp://ftp.mars.org/pub/mpeg/libid3tag-${PV}.tar.gz"
S = "${SRCDIR}/libid3tag-${PV}"

DEPENDS = "libc libgcc libz"
