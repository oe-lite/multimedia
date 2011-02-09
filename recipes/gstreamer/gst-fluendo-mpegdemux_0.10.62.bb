require gst-plugins.inc 

AUTO_PACKAGE_LIBS_LIBDIR = "/usr/lib/gstreamer-0.10:libgst:"
AUTO_PACKAGE_LIBS_PROVIDEPREFIX="gst-plugin-"
AUTO_PACKAGE_LIBS="\
flumpegdemux \
"

SRC_URI = "http://core.fluendo.com/gstreamer/src/${PN}/${PN}-${PV}.tar.bz2"
