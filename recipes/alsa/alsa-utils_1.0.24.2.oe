DESCRIPTION = "ALSA Utilities"
HOMEPAGE = "http://www.alsa-project.org"
BUGTRACKER = "https://bugtrack.alsa-project.org/alsa-bug/login_page.php"
SECTION = "console/utils"
LICENSE = "GPLv2+"
DEPENDS = "libasound ${HOST_ARCH}/sysroot-libpthread ${HOST_ARCH}/sysroot-libgcc ${HOST_ARCH}/sysroot-libdl"

SRC_URI = "ftp://ftp.alsa-project.org/pub/utils/alsa-utils-${PV}.tar.bz2 \
           "

EXTRA_OECONF = "--disable-xmlto --disable-nls --disable-alsamixer --without-curses"

inherit autotools-autoreconf gettext

PACKAGES += "\
             ${PN}-midi \
             ${PN}-aplay \
             ${PN}-alsaloop \
             ${PN}-amixer \
             ${PN}-aconnect \
             ${PN}-iecset \
             ${PN}-speakertest \
             ${PN}-aseqnet \
             ${PN}-aseqdump \
             ${PN}-alsaconf \
             ${PN}-alsactl "

FILES_${PN} = ""
FILES_${PN}-aplay       = "${bindir}/aplay ${bindir}/arecord"
FILES_${PN}-amixer      = "${bindir}/amixer"
FILES_${PN}-alsaloop    = "${bindir}/alsaloop"
FILES_${PN}-speakertest = "${bindir}/speaker-test ${datadir}/sounds/alsa/ ${datadir}/alsa/"
FILES_${PN}-midi        = "${bindir}/aplaymidi ${bindir}/arecordmidi ${bindir}/amidi"
FILES_${PN}-aconnect    = "${bindir}/aconnect"
FILES_${PN}-aseqnet     = "${bindir}/aseqnet"
FILES_${PN}-iecset      = "${bindir}/iecset"
FILES_${PN}-alsactl     = "${sbindir}/alsactl"
FILES_${PN}-aseqdump    = "${bindir}/aseqdump"
FILES_${PN}-alsaconf    = "${sbindir}/alsaconf"

RD = "libasound ${HOST_ARCH}/sysroot-libpthread ${HOST_ARCH}/sysroot-libdl"
RDEPENDS_${PN}-aplay       = "${RD} ${HOST_ARCH}/sysroot-libgcc"
RDEPENDS_${PN}-amixer      = "${RD}"
RDEPENDS_${PN}-alsaloop    = "${RD} ${HOST_ARCH}/sysroot-libgcc"
RDEPENDS_${PN}-speakertest = "${RD}"
RDEPENDS_${PN}-midi        = "${RD}"
RDEPENDS_${PN}-aconnect    = "${RD}"
RDEPENDS_${PN}-aseqnet     = "${RD}"
RDEPENDS_${PN}-iecset      = "${RD}"
RDEPENDS_${PN}-alsactl     = "${RD}"
RDEPENDS_${PN}-aseqdump    = "${RD}"
RDEPENDS_${PN}-alsaconf    = "${RD}"
RDEPENDS_${PN} = "${PN}-aplay ${PN}-amixer ${PN}-speakertest ${PN}-midi \
${PN}-aconnect ${PN}-aseqnet ${PN}-iecset ${PN}-alsactl ${PN}-aseqdump ${PN}-alsaconf \
${PN}-alsaloop \
"
