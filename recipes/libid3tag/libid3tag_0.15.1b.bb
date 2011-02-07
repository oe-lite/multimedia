DESCRIPTION = "Library for interacting with ID3 tags."
HOMEPAGE = "http://sourceforge.net/projects/mad/"
BUGTRACKER = "http://sourceforge.net/tracker/?group_id=12349&atid=112349"
LICENSE = "GPLv2+"
PRIORITY = "optional"
DEPENDS = "libz"


S = "${SRCDIR}/libid3tag-${PV}"

inherit autotools pkgconfig

SRC_URI = "ftp://ftp.mars.org/pub/mpeg/libid3tag-${PV}.tar.gz"

EXTRA_OECONF = "-enable-speed"
