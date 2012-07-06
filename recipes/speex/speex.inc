DESCRIPTION = "Speex is an Open Source/Free Software patent-free audio compression format designed for speech."
HOMEPAGE = "http://www.speex.org"
SECTION = "libs"
LICENSE = "BSD"

inherit autotools pkgconfig

SRC_URI = "http://downloads.xiph.org/releases/speex/speex-${PV}.tar.gz"

DEPENDS = "libm libogg"

EXTRA_OECONF = "\
	--enable-fixed-point \
	--disable-float-api \
	--disable-vbr \
	--with-ogg-libraries=${STAGE_DIR}/${HOST_TYPE}${libdir} \
	--with-ogg-includes=${STAGE_DIR}/${HOST_TYPE}${includedir} \
	--disable-oggtest \
"

inherit auto-package-libs
AUTO_PACKAGE_LIBS = "speex speexdsp"
AUTO_PACKAGE_LIBS_DEV_DEPENDS = "${PN}-dev_${PV}"
AUTO_PACKAGE_LIBS_DEV_RDEPENDS = "${PN}-dev_${PV}"
DEPENDS_${PN}-libspeex = "libc libm"
DEPENDS_${PN}-libspeexdsp = "libc libm"

inherit auto-package-utils
AUTO_PACKAGE_UTILS = "speexdec speexenc"
