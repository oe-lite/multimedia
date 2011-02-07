require gst-plugins.inc

EXTRA_OECONF += "--with-check=no --disable-esd"
DEPENDS += "gst-plugins-base-dev \
            gst-plugins-base \
            flac-dev \
            flac-libflac\
            speex-dev \
            gst-fluendo-mpegdemux-dev \
            gst-fluendo-mp3-dev"
