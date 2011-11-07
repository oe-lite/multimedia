DESCRIPTION = "FFmpeg-based GStreamer plug-in"
SECTION = "multimedia"
LICENSE = "LGPLv2.1+ | GPLv2+"
HOMEPAGE = "http://www.gstreamer.net/"

DEPENDS += "libgstbase libz"

inherit gst-plugins autotools-autoreconf pkgconfig

SRC_URI += "file://lower-rank.diff"


EXTRA_OECONF += "--with-ffmpeg-extra-configure=\"--target-os=linux\""

# ffmpeg_lgpl = 0 will result in the GPL licensed postproc plugin to
# be build. More info in README for gst-ffmpeg
RECIPE_FLAGS += "ffmpeg_lgpl"
DEFAULT_USE_ffmpeg_lgpl = "1"
EXTRA_OECONF:>USE_ffmpeg_lgpl = " --enable-lgpl"

FILES_${PN} += "${libdir}/gstreamer-${LIBV}/*.so"
RDEPENDS_${PN} += "libz libgstbase"
FILES_${PN}-dev += "${libdir}/gstreamer-${LIBV}/*.la ${libdir}/gstreamer-${LIBV}/*.a"
PROVIDES_${PN} = "gst-plugins-ffmpeg"

inherit auto-package-libs
AUTO_PACKAGE_LIBS = "\
ffmpegscale \
ffmpeg \
postproc \
"

PACKAGES += "${PN}-all"
RDEPENDS_${PN}-all = "${LIBS_AUTO_RPACKAGES}"
