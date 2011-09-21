SUMMARY = "GStreamer multimedia framework"
DESCRIPTION = "GStreamer is a multimedia framework for encoding and decoding video and sound. \
It supports a wide range of formats including mp3, ogg, avi, mpeg and quicktime."
HOMEPAGE = "http://gstreamer.freedesktop.org/"
BUGTRACKER = "https://bugzilla.gnome.org/enter_bug.cgi?product=Gstreamer"
PRIORITY = "optional"
LICENSE = "LGPLv2+"

inherit autotools-autoreconf pkgconfig c auto-package-utils

SRC_URI = "http://gstreamer.freedesktop.org/src/${PN}/${PN}-${PV}.tar.bz2"

EXTRA_OECONF = " \
--disable-docs-build \
--disable-dependency-tracking \
--with-check=no \
--disable-examples \
--disable-tests \
--disable-valgrind \
--disable-debug \
"

COMMON_DEP = "\
glib-libgobject \
glib-libgthread \
glib-libgmodule \
glib-libglib \
libxml2 \
libdl \
libm \
librt \
libpthread \
"

DEPENDS += " \
${COMMON_DEP} \
native:bison \
native:flex \
native:glib-utils \
gettext \
"

LIBV = "0.10"

AUTO_PACKAGE_UTILS = " \
gst-feedback gst-feedback-${LIBV} \
gst-inspect gst-inspect-${LIBV} \
gst-launch gst-launch-${LIBV} \
gst-typefind gst-typefind-${LIBV} \
gst-xmlinspect gst-xmlinspect-${LIBV} \
gst-xmllaunch gst-xmllaunch-${LIBV} \
"

AUTO_PACKAGE_UTILS_RDEPENDS = "${PN}"

FILES_${PN} = "\
${base_libdir}/*${SOLIBS} \
${libexecdir}/${PN}-${LIBV}/gst-* ${libdir}/lib*${SOLIBS} ${libdir}/${PN}-${LIBV}/*.so \
"

PROVIDES_${PN} = "lib${PN}"
RDEPENDS_${PN} += "${COMMON_DEP}"
DEPENDS_${PN} += "${COMMON_DEP} ${PN}-dev_${PV}"
DEPENDS_${PN}-dev = ""

FILES_${PN}-dev += "${libdir}/gstreamer-${LIBV}/*.la"
FILES_${PN}-doc += "${datadir}/gtk-doc/"
FILES_${PN}-dbg += "${libdir}/gstreamer-${LIBV}/.debug ${libexecdir}/${PN}-${LIBV}/.debug"
