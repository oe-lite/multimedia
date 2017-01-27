DESCRIPTION = "MPEG Audio Decoder Library"
HOMEPAGE = "http://sourceforge.net/projects/mad/"
BUGTRACKER = "http://sourceforge.net/tracker/?group_id=12349&atid=112349"
LICENSE = "GPLv2+"
DEPENDS = "libid3tag"
DEPENDS_${PN} = "libid3tag"
RDEPENDS_${PN} = "libid3tag"
DEPENDS_${PN}-dev = "libid3tag-dev"
RRDEPENDS_${PN}-dev = "libid3tag-dev"

require conf/fetch/sourceforge.conf
SRC_URI = "${SOURCEFORGE_MIRROR}/mad/libmad-${PV}.tar.gz \
           file://no-force-mem.patch \
           file://add-pkgconfig.patch \
           file://fix_for_mips_with_gcc-4.5.0.patch"

S = "${SRCDIR}/libmad-${PV}"

inherit autotools pkgconfig library

EXTRA_OECONF = "-enable-speed --enable-shared"
# The ASO's don't take any account of thumb...
EXTRA_OECONF_append_thumb = " --disable-aso --enable-fpm=default"
EXTRA_OECONF_append_arm = " --enable-fpm=arm"

#do_configure_prepend () {
##	damn picky automake...
#	touch NEWS AUTHORS ChangeLog
#}

ARM_INSTRUCTION_SET = "arm"
