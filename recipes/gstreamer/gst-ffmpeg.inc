DESCRIPTION = "FFmpeg-based GStreamer plug-in"
SECTION = "multimedia"
LICENSE = "GPLv2+ & LGPLv2+ & ( (GPLv2+ & LGPLv2.1+) | (GPLv3+ & LGPLv3+) )"
HOMEPAGE = "http://www.gstreamer.net/"

DEPENDS += "libgstbase libz"

inherit gst-plugins autotools-autoreconf pkgconfig

SRC_URI += "file://lower-rank.diff"

EXTRA_OECONF += "--with-ffmpeg-extra-configure=\"--target-os=linux\""

FILES_${PN} += "${libdir}/gstreamer-${LIBV}/*.so"
RDEPENDS_${PN} += "libz libgstbase"
FILES_${PN}-dev += "${libdir}/gstreamer-${LIBV}/*.la ${libdir}/gstreamer-${LIBV}/*.a"
PROVIDES_${PN} = "gst-plugins-ffmpeg"
