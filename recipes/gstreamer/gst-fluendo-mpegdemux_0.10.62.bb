require gst-plugins.inc

#EXTRA_OECONF += "disable-esd"
DEPENDS += "gst-plugins-base"
SRC_URI = "http://core.fluendo.com/gstreamer/src/${PN}/${PN}-${PV}.tar.bz2"
