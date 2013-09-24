DESCRIPTION = "TagLib is a library for reading and editing the meta-data of several popular audio formats"
HOMEPAGE = "http://developer.kde.org/~wheeler/taglib.html"
LICENSE = "LGPL"

inherit c++ pkgconfig auto-package-libs

DEPENDS = "libstdc++"

AUTO_PACKAGE_LIBS = "tag tag_c"

COMMON_DEPENDS = "libstdc++ libm libc libgcc ${PN}"
DEPENDS_${PN}-libtag += "${COMMON_DEPENDS}"
RDEPENDS_${PN}-libtag += "${COMMON_DEPENDS}"
DEPENDS_${PN}-libtag-c += "${COMMON_DEPENDS} libtag"
RDEPENDS_${PN}-libtag-c += "${COMMON_DEPENDS} libtag"
