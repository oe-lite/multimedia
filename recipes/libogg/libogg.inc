DESCRIPTION = "libogg is the bitstream and framing library \
for the Ogg project. It provides functions which are \
necessary to codec libraries like libvorbis."
HOMEPAGE = "http://xiph.org/"
LICENSE = "BSD-3-Clause"

inherit autotools-autoreconf pkgconfig library

SRC_URI = "http://downloads.xiph.org/releases/ogg/libogg-${PV}.tar.gz"

DEPENDS_${PN} = "libc"
RDPENDS_${PN} = "libc"
