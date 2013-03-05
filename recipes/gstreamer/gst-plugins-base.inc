PRIORITY = "optional"
HOMEPAGE = "http://www.gstreamer.net/"
DESCRIPTION = "GStreamer Base Plug-ins is a well-groomed and well-maintained collection of GStreamer plug-ins and elements"

inherit gst-plugins autotools-autoreconf pkgconfig

CONFIGURE_USE_FLAGS = "use=vorbis:depend=libvorbis:autolib=vorbis:autordepend=libvorbis"
CONFIGURE_USE_FLAGS += "use=alsa:depend=libasound:autolib=alsa:autordepend=libasound"
CONFIGURE_USE_FLAGS += "use=ogg:depend=libogg:autolib=ogg:autordepend=libogg"
CONFIGURE_USE_FLAGS += "use=video4linux:conf=gst_v4l:autolib=video4linux"
CONFIGURE_USE_FLAGS += "use=gst_x11:conf=x:depend=libx11,libxv:autolib=ximagesink,xvimagesink"

SRC_URI += "file://gstplaybin2-rawvideo-support.patch"
SRC_URI += "file://configure.ac-fix-subparse-plugin.patch"

FILES_${PN} = "\
${base_libdir}/*${SOLIBS} \
${libdir}/lib*${SOLIBS} \
"

PROVIDES_${PN} = "libgstbase"
DEPENDS_${PN} += "libgstreamer ${PN}-dev_${PV}"
DEPENDS_${PN}-dev = ""

inherit auto-package-utils
AUTO_PACKAGE_UTILS = " \
gst-visualise-0.10 \
gst-discoverer-0.10 \
"

RDEPENDS_${PN}-gst-visualise-0-10 += "perl"
AUTO_PACKAGE_UTILS_RDEPENDS = "${PN}"
AUTO_PACKAGE_LIBS_RDEPENDS = "${PN}"

inherit auto-package-libs
AUTO_PACKAGE_LIBS = "\
adder \
app \
audioconvert \
audiorate \
audioresample \
audiotestsrc \
decodebin2 \
decodebin \
encodebin \
ffmpegcolorspace \
gdp \
playbin \
subparse \
tcp \
typefindfunctions \
videorate \
videoscale \
videotestsrc \
volume \
"
PACKAGES += "${PN}-all"
RDEPENDS_${PN}-all = "${LIBS_AUTO_RPACKAGES}"
