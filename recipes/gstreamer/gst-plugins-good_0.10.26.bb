require gst-plugins.inc

EXTRA_OECONF += "--with-check=no --disable-esd"

DEPENDS += "\
flac-dev \
flac-libflac \
speex-dev \
gst-fluendo-mpegdemux-dev \
gst-fluendo-mp3-dev \
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

AUTO_PACKAGE_LIBS_LIBDIR = "/usr/lib/gstreamer-0.10:libgst:"
AUTO_PACKAGE_LIBS_PROVIDEPREFIX="gst-plugin-"
AUTO_PACKAGE_LIBS="\ 
oss4audio \
mulaw \
annodex \
deinterlace \
alpha \
goom2k1 \
multifile \
flac \
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
speex \
videobox \
flxdec"
