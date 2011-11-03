DESCRIPTION = "FLAC stands for Free Lossless Audio Codec, an audio format similar to MP3, but lossless."
HOMEPAGE = "http://flac.sourceforge.net/"
BUGTRACKER = "http://sourceforge.net/tracker/?group_id=13478&atid=113478"
LICENSE = "FDLv1.2 & GPLv2+ & LGPLv2.1+ & BSD"

inherit auto-package-libs configure-use c++
require conf/fetch/sourceforge.conf
SRC_URI = "${SOURCEFORGE_MIRROR}/flac/flac-${PV}.tar.gz \
           file://disable-xmms-plugin.patch \
           file://flac-gcc43-fixes.patch \
           file://14_metadata_iterators_memleak.patch \
           file://15_format-not-a-string-literal-and-no-format-arguments.patch\
"

CONFIGURE_USE_FLAGS += "use=ogg:depend=libogg"

DEPENDS = "libm libgcc \
           libstdc++"

AUTO_PACKAGE_LIBS = "FLAC FLAC++"
AUTO_PACKAGE_LIBS_RDEPENDS:USE_ogg = "libogg"
AUTO_PACKAGE_LIBS_DEV_DEPENDS = "${PN}-dev"

RDEPENDS_${PN}-libflac = "libm libgcc"
RDEPENDS_${PN}-libflac++ = "libflac libstdc++"

PROVIDES_${PN} = "metaflac"
FILES_${PN} = "${bindir}/*"
RDEPENDS_${PN} = "${PN}-libflaclibm"
RDEPENDS_${PN}:>USE_ogg " libogg"
           
inherit autotools-autoreconf

EXTRA_OECONF += "--disable-oggtest \
                --with-ogg-libraries=${TARGET_SYSROOT}/${libdir} \
                --with-ogg-includes=${TARGET_SYSROOT}/${includedir} \
                --disable-xmms-plugin \
                --without-xmms-prefix \
                --without-xmms-exec-prefix \
                --without-libiconv-prefix \
"

}

