DESCRIPTION = "FFmpeg-based GStreamer plug-in"
SECTION = "multimedia"
LICENSE = "GPLv2+ & LGPLv2+ & ( (GPLv2+ & LGPLv2.1+) | (GPLv3+ & LGPLv3+) )"
HOMEPAGE = "http://www.gstreamer.net/"

DEPENDS = "gst-plugins-base-dev libz gst-plugin-audio-0.10 gst-plugin-interfaces-0.10 gst-plugin-app-0.10 gst-plugin-video-0.10 gst-plugin-pbutils-0.10"

inherit gst-plugins autotools-autoreconf pkgconfig

SRC_URI += "file://lower-rank.diff"

EXTRA_OECONF += "--with-ffmpeg-extra-configure=\"--target-os=linux\" "

FILES_${PN} += "${libdir}/gstreamer-0.10/*.so"
FILES_${PN}-dev += "${libdir}/gstreamer-0.10/*.la ${libdir}/gstreamer-0.10/*.a"
