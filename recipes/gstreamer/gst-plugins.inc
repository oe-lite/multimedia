PRIORITY = "optional"
LICENSE = "LGPL"
HOMEPAGE = "http://www.gstreamer.net/"
DESCRIPTION = "Plugins for GStreamer"

inherit autotools pkgconfig auto-package-libs

DEPENDS =+ "gstreamer-dev libogg-dev libvorbis-dev"

SRC_URI = "http://gstreamer.freedesktop.org/src/${PN}/${PN}-${PV}.tar.bz2"

EXTRA_OECONF = "--disable-aalib --disable-shout2 --disable-sdl --disable-cdaudio --disable-orc --x-includes=${STAGE_DIR}/sysroot/usr/include --x-libraries=${STAGE_DIR}/sysroot/usr/lib "

acpaths = "-I ${S}/common/m4 -I ${S}/m4"

PACKAGES += "${PN}-apps"
FILES_${PN}-apps = "${bindir}"

LIBV = "0.10"
FILES_${PN}-dbg += "${libdir}/gstreamer-${LIBV}/.debug"
