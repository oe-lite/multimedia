PRIORITY = "optional"
LICENSE = "MPL v1.1"
HOMEPAGE = "http://www.gstreamer.net/"
DESCRIPTION = "Fluendo mpeg demuxer GStreamer plugin"

inherit gst-plugins autotools pkgconfig auto-package-libs

AUTO_PACKAGE_LIBS_LIBDIR = "/usr/lib/gstreamer-0.10:libgst::.so"
AUTO_PACKAGE_LIBS_PROVIDEPREFIX="gst-plugin-"
AUTO_PACKAGE_LIBS="\
flumpegdemux \
"
RDEPENDS_${PN}-libflumpegdemux += "gstreamer-libgstbase-0.10"

SRC_URI = "http://core.fluendo.com/gstreamer/src/${PN}/${PN}-${PV}.tar.bz2"
