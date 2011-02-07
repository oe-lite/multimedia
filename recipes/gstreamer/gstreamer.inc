SUMMARY = "GStreamer multimedia framework"
DESCRIPTION = "GStreamer is a multimedia framework for encoding and decoding video and sound. \
It supports a wide range of formats including mp3, ogg, avi, mpeg and quicktime."
HOMEPAGE = "http://gstreamer.freedesktop.org/"
BUGTRACKER = "https://bugzilla.gnome.org/enter_bug.cgi?product=Gstreamer"
PRIORITY = "optional"
LICENSE = "LGPLv2+"
DEPENDS = "glib-dev \
           glib-libgobject-dev \
           glib-libgthread-dev \
           glib-libgmodule-dev \
           glib-libglib-dev \
           gettext-dev \
           libxml2-dev \
           ${TARGET_ARCH}/sysroot-libdl \
           ${TARGET_ARCH}/sysroot-libm \
           ${TARGET_ARCH}/sysroot-libstdc++ \
           ${TARGET_ARCH}/sysroot-librt \
           ${TARGET_ARCH}/sysroot-libpthread \
           glib-native-utils \
           bison-native \
           flex-native" 

DEPENDS_${PN} = "glib-dev \
           		glib-libgobject-dev \
           		glib-libgthread-dev \
           		glib-libgmodule-dev \
           		glib-libglib-dev \
           		gettext-dev \
           		libxml2-dev \
           		${TARGET_ARCH}/sysroot-libdl \
           		${TARGET_ARCH}/sysroot-libm \
           		${TARGET_ARCH}/sysroot-libstdc++ \
           		${TARGET_ARCH}/sysroot-librt \
           		${TARGET_ARCH}/sysroot-libpthread \
           		glib-native-utils"

SRC_URI = "http://gstreamer.freedesktop.org/src/gstreamer/gstreamer-${PV}.tar.bz2"

inherit autotools pkgconfig

EXTRA_OECONF = "--disable-docs-build --disable-dependency-tracking --with-check=no --disable-examples --disable-tests --disable-valgrind --disable-debug"

FILES_${PN} += " ${libdir}/gstreamer-0.10/*.so"
FILES_${PN}-dev += " ${libdir}/gstreamer-0.10/*.la ${libdir}/gstreamer-0.10/*.a"
FILES_${PN}-dbg += " ${libdir}/gstreamer-0.10/.debug/"
