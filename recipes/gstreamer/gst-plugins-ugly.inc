HOMEPAGE = "http://www.gstreamer.net/"
DESCRIPTION = "GStreamer Bad Plug-ins is a set of plug-ins that aren't up to par compared to the rest."

inherit gst-plugins autotools-autoreconf pkgconfig

DEPENDS += "\
libgstbase \
libz \
"

EXTRA_OECONF += "\
--disable-examples \
--disable-experimental \
--disable-sdl \
--disable-cdaudio \
--disable-vdpau \
--disable-apexsink \
"

FILES_${PN} += "${libdir}/gstreamer-${LIBV}/*.so"
FILES_${PN}-dev += "${libdir}/gstreamer-${LIBV}/*.la ${libdir}/gstreamer-${LIBV}/*.a"

RDEPENDS_${PN} += " \
libgstbase \
libz \
"
inherit auto-package-libs
AUTO_PACKAGE_LIBS = "\
asf \
dvdlpcmdec \
dvdsub \
iec958 \
mpegaudioparse \
mpegstream \
rmdemux \
"

PACKAGES += "${PN}-all"
RDEPENDS_${PN}-all = "${LIBS_AUTO_RPACKAGES}"
