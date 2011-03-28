PRIORITY = "optional"
LICENSE = "LGPL"
HOMEPAGE = "http://www.gstreamer.net/"
DESCRIPTION = "GStreamer Base Plug-ins is a well-groomed and well-maintained collection of GStreamer plug-ins and elements"

inherit gst-plugins autotools-autoreconf pkgconfig auto-package-libs

require gst-plugins-base-options.inc

RDEPENDS_${PN}-libinterfaces-0.10 += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libaudio-0.10 += "${PN}-libinterfaces-0.10"
RDEPENDS_${PN}-libapp-0.10 += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libvideo-0.10 += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libpbutils-0.10 += "${PN}-libvideo-0.10"

RDEPENDS_${PN}-libadder += "${PN}-libaudio-0.10"
RDEPENDS_${PN}-libapp += "${PN}-libapp-0.10"
RDEPENDS_${PN}-libaudioconvert += "${PN}-libaudio-0.10"
RDEPENDS_${PN}-libaudiorate += "gstreamer-libgstreamer-0.10"
RDEPENDS_${PN}-libaudioresample += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libaudiotestsrc += "gstreamer-libgstbase-0.10 gstreamer-libgstcontroller-0.10"
RDEPENDS_${PN}-libdecodebin2 += "${PN}-libpbutils-0.10"
RDEPENDS_${PN}-libdecodebin += "${PN}-libpbutils-0.10"
RDEPENDS_${PN}-libffmpegcolorspace += "${PN}-libvideo-0.10"
RDEPENDS_${PN}-libgdp += "gstreamer-libgstbase-0.10 gstreamer-libgstdataprotocol-0.10"
RDEPENDS_${PN}-libplaybin += "${PN}-libinterfaces-0.10 ${PN}-libpbutils-0.10"
RDEPENDS_${PN}-libsubparse += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libtcp += "gstreamer-libgstbase-0.10 gstreamer-libgstdataprotocol-0.10"
RDEPENDS_${PN}-libtypefindfunctions += "${PN}-libpbutils-0.10"
RDEPENDS_${PN}-libvideorate += "gstreamer-libgstreamer-0.10"
RDEPENDS_${PN}-libvideoscale += "${PN}-libvideo-0.10"
RDEPENDS_${PN}-libvideotestsrc += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libvolume += "${PN}-libaudio-0.10 gstreamer-libgstcontroller-0.10"

AUTO_PACKAGE_LIBS_LIBDIR = "/usr/lib:libgst /usr/lib/gstreamer-0.10:libgst::.so"
AUTO_PACKAGE_LIBS_PROVIDEPREFIX="gst-plugin-"
AUTO_PACKAGE_LIBS += "\
#from /usr/lib/
audio-0.10 \
tag-0.10 \
pbutils-0.10 \
fft-0.10 \
sdp-0.10 \
riff-0.10 \
netbuffer-0.10 \
interfaces-0.10 \
app-0.10 \
cdda-0.10 \
video-0.10 \
rtsp-0.10 \
rtp-0.10 \
#from /usr/lib/gstreamer-0.10
audiotestsrc \
audioresample \
adder \
videoscale \
audioconvert \
decodebin2 \
volume \
tcp \
videorate \
audiorate \
ffmpegcolorspace \
gdp \
subparse \
playbin \
app \
videotestsrc \
typefindfunctions \
decodebin"
