HOMEPAGE = "http://www.gstreamer.net/"
DESCRIPTION = "GStreamer Good Plug-ins is a set of plug-ins that we consider to have good quality code and correct functionality."

inherit gst-plugins autotools-autoreconf pkgconfig make

SRC_URI += "file://0001-v4l2-fix-build-with-recent-kernels-the-v4l2_buffer-i.patch"

CONFIGURE_USE_FLAGS = "use=flac:depend=libflac:autolib=flac:autordepend=libflac"
CONFIGURE_USE_FLAGS += "use=speex:depend=libspeex:autolib=speex:autordepend=libspeex"
CONFIGURE_USE_FLAGS += "use=shout2:depend=libshout2:autolib=shout2:autordepend=libshout2"

EXTRA_OECONF += "--with-check=no --disable-aalib --disable-libcaca --disable-esd"

FILES_${PN} = ""
RDEPENDS_${PN} += "libgstbase"
AUTO_PACKAGE_LIBS_RDEPENDS = "libgstbase"

DEPENDS += "libgstbase"

inherit auto-package-libs
AUTO_PACKAGE_LIBS = "\
alaw \
alphacolor \
alpha \
annodex \
apetag \
audiofx \
audioparsers \
auparse \
autodetect \
avi \
cutter \
debug \
deinterlace \
effectv \
equalizer \
flv \
flxdec \
goom2k1 \
goom \
icydemux \
id3demux \
imagefreeze \
interleave \
isomp4 \
level \
matroska \
mulaw \
multifile \
multipart \
navigationtest \
oss4audio \
ossaudio \
replaygain \
rtpmanager \
rtp \
rtsp \
shapewipe \
smpte \
spectrum \
udp \
video4linux2 \
videobox \
videocrop \
videofilter \
videomixer \
wavenc \
wavparse \
y4menc \
"

FILES_${PN}-libequalizer += "${datadir}/gstreamer-${LIBV}/presets/"

PACKAGES += "${PN}-all"
RDEPENDS_${PN}-all = "${LIBS_AUTO_RPACKAGES}"
