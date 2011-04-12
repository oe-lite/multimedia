HOMEPAGE = "http://www.gstreamer.net/"
DESCRIPTION = "GStreamer Bad Plug-ins is a set of plug-ins that aren't up to par compared to the rest."

inherit gst-plugins autotools-autoreconf pkgconfig

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

EXTRA_OECONF += "--disable-examples --disable-experimental --disable-sdl --disable-cdaudio \
                 --disable-vdpau --disable-apexsink"

FILES_${PN} += "${libdir}/gstreamer-0.10/*.so"
FILES_${PN}-dev += "${libdir}/gstreamer-0.10/*.la ${libdir}/gstreamer-0.10/*.a"
