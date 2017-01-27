DESCRIPTION = "FLAC stands for Free Lossless Audio Codec, an audio format similar to MP3, but lossless."
HOMEPAGE = "https://xiph.org/flac"
LICENSE = "GFDL-1.2 GPL-2.0 LGPL-2.1 BSD-3-Clause"

inherit auto-package-libs configure-use c++
SRC_URI = "http://downloads.xiph.org/releases/flac/flac-${PV}.tar.xz"

CONFIGURE_USE_FLAGS += "use=ogg:depend=libogg"

DEPENDS = "libm libc"

AUTO_PACKAGE_LIBS = "FLAC FLAC++"
AUTO_PACKAGE_LIBS_RDEPENDS:USE_ogg = " libogg"
AUTO_PACKAGE_LIBS_DEV_DEPENDS:USE_ogg = " libogg"

DEPENDS_${PN}-libflac = "libc libm"
RDEPENDS_${PN}-libflac = "libc libm"
DEPENDS_${PN}-libflac++ = "libc libflac libm libstdc++"
RDEPENDS_${PN}-libflac++ = "libflac libstdc++"
FILES_${PN}-libflac-dev += "${includedir}/FLAC \
    ${libdir}/pkgconfig/flac.pc \
    ${datadir}/aclocal/libFLAC.m4"
FILES_${PN}-libflac++-dev += "${includedir}/FLAC++ \
    ${libdir}/pkgconfig/flac++.pc \
    ${datadir}/aclocal/libFLAC++.m4"
FILES_${PN} = "${bindir}"
FILES_${PN}-dev = ""

PROVIDES_${PN} = "metaflac"
FILES_${PN} = "${bindir}/*"
DEPENDS_${PN} = "libc libm libflac"
RDEPENDS_${PN} = "${PN}-libflac libm libc"
RDEPENDS_${PN}:>USE_ogg = " libogg"
DEPENDS_${PN}:>USE_ogg = " libogg"

inherit autotools-autoreconf

EXTRA_OECONF += "--disable-oggtest \
                --with-ogg-libraries=${TARGET_SYSROOT}/${libdir} \
                --with-ogg-includes=${TARGET_SYSROOT}/${includedir} \
                --disable-xmms-plugin \
                --without-xmms-prefix \
                --without-xmms-exec-prefix \
                --without-libiconv-prefix \
"

EXTRA_OECONF += "${EXTRA_OECONF_ALTIVEC}"
EXTRA_OECONF_ALTIVEC = "--disable-altivec"
EXTRA_OECONF_ALTIVEC:HOST_OS_linux-gnualtivec = ""
