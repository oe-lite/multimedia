DESCRIPTION = "MPEG Audio Decoder Library"
HOMEPAGE = "http://sourceforge.net/projects/mad/"
BUGTRACKER = "http://sourceforge.net/tracker/?group_id=12349&atid=112349"
LICENSE = "GPL-2.0"

SRC_URI = "${SOURCEFORGE_MIRROR}/mad/libmad-${PV}.tar.gz \
           file://no-force-mem.patch \
           file://add-pkgconfig.patch \
           file://fix_for_mips_with_gcc-4.5.0.patch"

require conf/fetch/sourceforge.conf
inherit autotools pkgconfig library

S = "${SRCDIR}/libmad-${PV}"

EXTRA_OECONF = "-enable-speed --enable-shared"
# The ASO's don't take any account of thumb...
EXTRA_OECONF_append_thumb = " --disable-aso --enable-fpm=default"
EXTRA_OECONF_append_arm = " --enable-fpm=arm"

ARM_INSTRUCTION_SET = "arm"

DEPENDS = "libid3tag"
DEPENDS_${PN} = "libid3tag libc"
RDEPENDS_${PN} = "libid3tag libc"
DEPENDS_${PN}-dev = "libid3tag-dev"
RRDEPENDS_${PN}-dev = "libid3tag-dev"
