require gst-plugins.inc

# gst-plugins-base only builds the alsa plugin
# if alsa has been built and is present.  You will
# not get an error if this is not present, just 
# a missing alsa plugin
DEPENDS += "alsa-lib"
EXTRA_OECONF += "--disable-pango"

AUTO_PACKAGE_LIBS_LIBDIR = "/usr/lib:libgst: /usr/lib/gstreamer-0.10:libgst:"
AUTO_PACKAGE_LIBS_PROVIDEPREFIX="gst-plugin-"
AUTO_PACKAGE_LIBS="\
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
vorbis \
ffmpegcolorspace \
video4linux \
ogg \
gdp \
subparse \
playbin \
app \
videotestsrc \
typefindfunctions \
decodebin"
