DESCRIPTION = "Ogg Vorbis is a high-quality lossy audio codec \
that is free of intellectual property restrictions. libvorbis \
is the main vorbis codec library."
HOMEPAGE = "http://xiph.org/"
BUGTRACKER = "https://trac.xiph.org/newticket"
LICENSE = "BSD"

DEPENDS = "libogg-dev \
           ${TARGET_ARCH}/sysroot-libm"
SRC_URI = "http://downloads.xiph.org/releases/vorbis/libvorbis-${PV}.tar.gz"

inherit autotools pkgconfig

# vorbisfile.c reveals a problem in the gcc register spilling for the
# thumb instruction set...
FULL_OPTIMIZATION_thumb = "-O0"

EXTRA_OECONF = "--with-ogg-libraries=${STAGE_DIR}/sysroot/usr/lib \
                --with-ogg-includes=${STAGE_DIR}/sysroot/usr/include"
