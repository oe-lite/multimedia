DEPENDS = "libasound libpthread libgcc libdl"

SRC_URI = "ftp://ftp.alsa-project.org/pub/utils/alsa-utils-${PV}.tar.bz2"

COMPATIBLE_HOST_ARCHS = ".*linux"

EXTRA_OECONF = "--disable-xmlto --disable-nls --disable-alsamixer --without-curses"

inherit autotools gettext

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
             ${PN}-alsactl \
             ${PN}-alsaucm \
             ${PN}-udevrules \
             ${PN}-systemd \
             ${PN}-alsabat \
             ${PN}-alsatplg \
             ${PN}-alsa-info.sh"

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
FILES_${PN}-alsaucm     = "${bindir}/alsaucm"
FILES_${PN}-udevrules   = "${base_libdir}/udev/rules.d/"
FILES_${PN}-systemd     = "${base_libdir}/systemd/"
FILES_${PN}-alsabat     = "${bindir}/alsabat ${sbindir}/alsabat-test.sh"
FILES_${PN}-alsatplg    = "${bindir}/alsatplg"
FILES_${PN}-alsa-info.sh = "${sbindir}/alsa-info.sh"

DEPS = "libasound libc libdl libm libpthread"
DEPENDS_${PN}-aplay        = "${DEPS} libgcc"
DEPENDS_${PN}-amixer       = "${DEPS}"
DEPENDS_${PN}-alsaloop     = "${DEPS} libgcc"
DEPENDS_${PN}-speakertest  = "${DEPS}"
DEPENDS_${PN}-midi         = "${DEPS}"
DEPENDS_${PN}-aconnect     = "${DEPS}"
DEPENDS_${PN}-aseqnet      = "${DEPS}"
DEPENDS_${PN}-iecset       = "${DEPS}"
DEPENDS_${PN}-alsactl      = "${DEPS}"
DEPENDS_${PN}-aseqdump     = "${DEPS}"
DEPENDS_${PN}-alsaconf     = "${DEPS}"
DEPENDS_${PN}-alsaucm      = "${DEPS}"
DEPENDS_${PN}-alsabat      = "${DEPS}"
DEPENDS_${PN}-alsatplg     = "${DEPS}"
DEPENDS_${PN}-alsa-info.sh = "${DEPS}"

RD = "libasound libpthread libdl"
RDEPENDS_${PN}-aplay       = "${RD} libgcc"
RDEPENDS_${PN}-amixer      = "${RD}"
RDEPENDS_${PN}-alsaloop    = "${RD} libgcc"
RDEPENDS_${PN}-speakertest = "${RD}"
RDEPENDS_${PN}-midi        = "${RD}"
RDEPENDS_${PN}-aconnect    = "${RD}"
RDEPENDS_${PN}-aseqnet     = "${RD}"
RDEPENDS_${PN}-iecset      = "${RD}"
RDEPENDS_${PN}-alsactl     = "${RD}"
RDEPENDS_${PN}-aseqdump    = "${RD}"
RDEPENDS_${PN}-alsaconf    = "${RD}"
RDEPENDS_${PN}-systemd     = "${PN}-alsactl"
RDEPENDS_${PN}-alsabat     = "${RD}"
RDEPENDS_${PN}-alsatplg    = "${RD}"
RDEPENDS_${PN}-alsa-info.sh = "${RD}"
RDEPENDS_${PN}-alsaucm     = "${RD}"
RDEPENDS_${PN} = "${PN}-aplay ${PN}-amixer ${PN}-speakertest ${PN}-midi \
${PN}-aconnect ${PN}-aseqnet ${PN}-iecset ${PN}-alsactl ${PN}-aseqdump ${PN}-alsaconf \
${PN}-alsaloop \
"
