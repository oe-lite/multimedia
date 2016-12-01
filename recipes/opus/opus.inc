SUMMARY = "Opus is a totally open, royalty-free, highly versatile audio codec"
HOMEPAGE = "https://www.opus-codec.org/"
LICENSE = "BSD-3-Clause"

SRC_URI = "http://downloads.xiph.org/releases/opus/opus-${PV}.tar.gz"

RECIPE_TYPES = "machine native"

inherit autotools
inherit library

DEPENDS += "libm"
DEPENDS_${PN} += "libc libm"
RDEPENDS_${PN} += "libc libm"
