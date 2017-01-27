DESCRIPTION = "TagLib is a library for reading and editing the meta-data of several popular audio formats"
HOMEPAGE = "http://taglib.org"
LICENSE = "LGPL-2.1 MPL-1.1"

SRC_URI = "http://taglib.github.io/releases/${PN}-${PV}.tar.gz"

inherit c++ pkgconfig auto-package-libs cmake

DEPENDS = "libstdc++"

EXTRA_OE_CMAKE_CONF = " \
  -DCMAKE_BUILD_TYPE=Release \
"

AUTO_PACKAGE_LIBS = "tag tag_c"

COMMON_DEPENDS = "libstdc++ libm libc libgcc ${PN}"
DEPENDS_${PN}-libtag += "${COMMON_DEPENDS}"
RDEPENDS_${PN}-libtag += "${COMMON_DEPENDS}"
DEPENDS_${PN}-libtag-c += "${COMMON_DEPENDS} libtag"
RDEPENDS_${PN}-libtag-c += "${COMMON_DEPENDS} libtag"
