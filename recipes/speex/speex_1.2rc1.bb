DESCRIPTION = "Speex is an Open Source/Free Software patent-free audio compression format designed for speech."
HOMEPAGE = "http://www.speex.org"
SECTION = "libs"
LICENSE = "BSD"
DEPENDS = "libm libogg" # FIXME: Verify that this actually works, incluyding that libogg is properly packaged

SRC_URI = "http://downloads.us.xiph.org/releases/speex/speex-1.2rc1.tar.gz"

#PARALLEL_MAKE = ""

inherit autotools pkgconfig

EXTRA_OECONF = " --enable-fixed-point --with-ogg-libraries=${STAGE_DIR}/${HOST_TYPE}${libdir} \
                 --disable-float-api --disable-vbr \
                 --with-ogg-includes=${STAGE_DIR}/${HOST_TYPE}${includedir} --disable-oggtest"

PACKAGES += "${PN}-bin"

PROVIDES_${PN} = "lib${PN}"

FILES_${PN} = "${libdir}/lib*.so.*"
FILES_${PN}-dev += "${libdir}/lib*.so.*"
FILES_${PN}-bin = "${bindir}"
