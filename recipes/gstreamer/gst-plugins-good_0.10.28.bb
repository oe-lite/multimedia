LICENSE = "LGPL"
HOMEPAGE = "http://www.gstreamer.net/"
DESCRIPTION = "GStreamer Good Plug-ins is a set of plug-ins that we consider to have good quality code and correct functionality."

inherit gst-plugins autotools-autoreconf pkgconfig auto-package-libs

require gst-plugins-good-options.inc

EXTRA_OECONF += "--with-check=no"

DEPENDS += "\
gst-plugins-base-dev \
gst-plugin-audio-0.10 \
gst-plugin-tag-0.10 \
gst-plugin-pbutils-0.10 \
gst-plugin-fft-0.10 \
gst-plugin-sdp-0.10 \
gst-plugin-riff-0.10 \
gst-plugin-netbuffer-0.10 \
gst-plugin-interfaces-0.10 \
gst-plugin-app-0.10 \
gst-plugin-cdda-0.10 \
gst-plugin-video-0.10 \
gst-plugin-rtsp-0.10 \
gst-plugin-rtp-0.10 \
"
RDEPENDS_${PN}-libalaw += "gstreamer-libgstreamer-0.10"
RDEPENDS_${PN}-libalphacolor += "gstreamer-libgstbase-0.10 gst-plugin-video-0.10"
RDEPENDS_${PN}-libalpha += "gstreamer-libgstbase-0.10 gstreamer-libgstcontroller-0.10 gst-plugin-video-0.10"
RDEPENDS_${PN}-libannodex += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libapetag += "gst-plugin-pbutils-0.10 gst-plugin-tag-0.10"
RDEPENDS_${PN}-libaudiofx += "gst-plugin-audio-0.10 gstreamer-libgstbase-0.10 gstreamer-libgstcontroller-0.10 gst-plugin-fft-0.10"
RDEPENDS_${PN}-libauparse += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libautodetect += "gstreamer-libgstreamer-0.10"
RDEPENDS_${PN}-libavi += "gst-plugin-audio-0.10 gstreamer-libgstbase-0.10 gst-plugin-riff-0.10 gst-plugin-tag-0.10"
RDEPENDS_${PN}-libcutter += "gst-plugin-audio-0.10 gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libdebug += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libdeinterlace += "gstreamer-libgstbase-0.10 gst-plugin-video-0.10"
RDEPENDS_${PN}-libeffectv += "gstreamer-libgstbase-0.10 gstreamer-libgstcontroller-0.10 gst-plugin-video-0.10"
RDEPENDS_${PN}-libequalizer += "gst-plugin-audio-0.10 gstreamer-libgstbase-0.10 gstreamer-libgstcontroller-0.10"
RDEPENDS_${PN}-libflv += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libflxdec += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libgoom2k1 += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libgoom += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libicydemux += "gstreamer-libgstbase-0.10 gst-plugin-tag-0.10"
RDEPENDS_${PN}-libid3demux += "gst-plugin-pbutils-0.10 gst-plugin-tag-0.10"
RDEPENDS_${PN}-libimagefreeze += "gstreamer-libgstreamer-0.10"
RDEPENDS_${PN}-libinterleave += "gst-plugin-audio-0.10 gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-liblevel += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libmatroska += "gst-plugin-audio-0.10 gst-plugin-pbutils-0.10 gst-plugin-riff-0.10 gst-plugin-tag-0.10"
RDEPENDS_${PN}-libmulaw += "gstreamer-libgstreamer-0.10"
RDEPENDS_${PN}-libmultifile += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libmultipart += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libnavigationtest += "gstreamer-libgstbase-0.10 gst-plugin-video-0.10"
RDEPENDS_${PN}-liboss4audio += "gst-plugin-audio-0.10 gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libossaudio += "gst-plugin-audio-0.10 gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libqtdemux += "gst-plugin-audio-0.10 gst-plugin-pbutils-0.10 gst-plugin-riff-0.10 gst-plugin-rtp-0.10 gst-plugin-tag-0.10"
RDEPENDS_${PN}-libreplaygain += "gst-plugin-pbutils-0.10"
RDEPENDS_${PN}-librtpmanager += "gstreamer-libgstbase-0.10 gst-plugin-netbuffer-0.10 gst-plugin-rtp-0.10"
RDEPENDS_${PN}-librtp += "gst-plugin-audio-0.10 gstreamer-libgstbase-0.10 gst-plugin-rtp-0.10 gst-plugin-tag-0.10"
RDEPENDS_${PN}-librtsp += "gstreamer-libgstbase-0.10 gst-plugin-interfaces-0.10 gst-plugin-rtp-0.10 gst-plugin-rtsp-0.10 gst-plugin-sdp-0.10"
RDEPENDS_${PN}-libshapewipe += "gstreamer-libgstbase-0.10 gstreamer-libgstcontroller-0.10 gst-plugin-video-0.10"
RDEPENDS_${PN}-libsmpte += "gstreamer-libgstbase-0.10 gstreamer-libgstcontroller-0.10 gst-plugin-video-0.10"
RDEPENDS_${PN}-libspectrum += "gst-plugin-audio-0.10 gstreamer-libgstbase-0.10 gst-plugin-fft-0.10"
RDEPENDS_${PN}-libudp += "gstreamer-libgstbase-0.10 gst-plugin-netbuffer-0.10"
RDEPENDS_${PN}-libvideo4linux2 += "gstreamer-libgstbase-0.10 gstreamer-libgstcontroller-0.10 gst-plugin-interfaces-0.10 gst-plugin-video-0.10"
RDEPENDS_${PN}-libvideobox += "gstreamer-libgstbase-0.10 gstreamer-libgstcontroller-0.10 gst-plugin-video-0.10"
RDEPENDS_${PN}-libvideocrop += "gstreamer-libgstbase-0.10"
RDEPENDS_${PN}-libvideofilter += "gstreamer-libgstbase-0.10 gstreamer-libgstcontroller-0.10 gst-plugin-interfaces-0.10 gst-plugin-video-0.10"
RDEPENDS_${PN}-libvideomixer += "gstreamer-libgstbase-0.10 gstreamer-libgstcontroller-0.10 gst-plugin-video-0.10"
RDEPENDS_${PN}-libwavenc += "gst-plugin-audio-0.10 gstreamer-libgstbase-0.10 gst-plugin-riff-0.10 gst-plugin-tag-0.10"
RDEPENDS_${PN}-libwavparse += "gst-plugin-audio-0.10 gstreamer-libgstbase-0.10 gst-plugin-riff-0.10 gst-plugin-tag-0.10"
RDEPENDS_${PN}-liby4menc += "gstreamer-libgstreamer-0.10"

AUTO_PACKAGE_LIBS_LIBDIR = "/usr/lib/gstreamer-0.10:libgst::.so"
AUTO_PACKAGE_LIBS_PROVIDEPREFIX="gst-plugin-"
AUTO_PACKAGE_LIBS="\ 
oss4audio \
mulaw \
annodex \
deinterlace \
alpha \
goom2k1 \
multifile \
smpte \
alphacolor \
spectrum  \
effectv \
rtsp \
ossaudio \
replaygain \
icydemux \
flv \
imagefreeze \
audiofx \
qtdemux \
wavparse \
avi \
autodetect \
videofilter \
videomixer \
goom \
matroska \
apetag \
alaw \
navigationtest \
interleave \
rtpmanager \
wavenc \
level \
y4menc \
videocrop \
udp \
multipart \
shapewipe \
debug \
auparse \
video4linux2 \
equalizer \
cutter \
rtp \
id3demux \
videobox \
flxdec"
