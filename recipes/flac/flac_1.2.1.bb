DESCRIPTION = "FLAC stands for Free Lossless Audio Codec, an audio format similar to MP3, but lossless."
HOMEPAGE = "http://flac.sourceforge.net/"
BUGTRACKER = "http://sourceforge.net/tracker/?group_id=13478&atid=113478"
LICENSE = "FDLv1.2 & GPLv2+ & LGPLv2.1+ & BSD"

DEPENDS = "libogg-dev \
           ${TARGET_ARCH}/sysroot-libstdc++"

require conf/fetch/sourceforge.conf
SRC_URI = "${SOURCEFORGE_MIRROR}/flac/flac-${PV}.tar.gz \
           file://disable-xmms-plugin.patch \
           file://flac-gcc43-fixes.patch \
           file://xmms.m4"
           

inherit autotools

EXTRA_OECONF = "--disable-oggtest --disable-id3libtest \
                --with-ogg-libraries=${STAGE_DIR}/sysroot/usr/lib \
                --with-ogg-includes=${STAGE_DIR}/sysroot/usr/include \
                --without-xmms-prefix \
                --without-xmms-exec-prefix \
                --without-libiconv-prefix \
                --without-id3lib"

do_configure () {
	install -d ${S}/m4
	install -m 0644 ${SRCDIR}/xmms.m4 ${S}/m4/
	autotools_do_configure
	# removes '-read-only-relocs' which is enabled for PowerPC builds.
	# It makes the build fail, other archs are not affected. Fixes #1775.
	sed -i 's/-Wl,-read_only_relocs,warning//g' src/libFLAC/Makefile
}

PACKAGES += "${PN}-libflac ${PN}-libflac++ ${PN}-liboggflac ${PN}-liboggflac++"

PROVIDES_${PN}-libflac = "libflac"
PROVIDES_${PN}-libflac++ = "libflac++"
PROVIDES_${PN}-liboggflac = "liboggflac"
PROVIDES_${PN}-liboggflac++ = "liboggflac++"

FILES_${PN} = "${bindir}/*"
FILES_${PN}-libflac = "${libdir}/libFLAC.so.*"
FILES_${PN}-libflac++ = "${libdir}/libFLAC++.so.*"
FILES_${PN}-liboggflac = "${libdir}/libOggFLAC.so.*"
FILES_${PN}-liboggflac++ = "${libdir}/libOggFLAC++.so.*"

