PRIORITY = "optional"
LICENSE = "MIT"
HOMEPAGE = "http://www.fluendo.com/shop/product/fluendo-mp3-decoder/"
DESCRIPTION = "Fluendo mp3 decoder GStreamer plugin"

inherit gst-plugins autotools pkgconfig auto-package-libs

AUTO_PACKAGE_LIBS_LIBDIR = "/usr/lib/gstreamer-0.10:libgst::.so"
AUTO_PACKAGE_LIBS_PROVIDEPREFIX="gst-plugin-"
RDEPENDS_${PN}-libflump3dec += "gstreamer-libgstreamer-0.10"

AUTO_PACKAGE_LIBS="\
flump3dec \
"
SRC_URI = "http://core.fluendo.com/gstreamer/src/${PN}/${PN}-${PV}.tar.bz2"
