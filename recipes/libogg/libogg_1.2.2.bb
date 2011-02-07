DESCRIPTION = "libogg is the bitstream and framing library \
for the Ogg project. It provides functions which are \
necessary to codec libraries like libvorbis."
HOMEPAGE = "http://xiph.org/"
BUGTRACKER = "https://trac.xiph.org/newticket"
LICENSE = "BSD"

inherit autotools pkgconfig

SRC_URI = "http://downloads.xiph.org/releases/ogg/libogg-${PV}.tar.gz"

