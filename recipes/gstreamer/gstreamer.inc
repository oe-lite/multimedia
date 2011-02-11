SUMMARY = "GStreamer multimedia framework"
DESCRIPTION = "GStreamer is a multimedia framework for encoding and decoding video and sound. \
It supports a wide range of formats including mp3, ogg, avi, mpeg and quicktime."
HOMEPAGE = "http://gstreamer.freedesktop.org/"
BUGTRACKER = "https://bugzilla.gnome.org/enter_bug.cgi?product=Gstreamer"
PRIORITY = "optional"
LICENSE = "LGPLv2+"

inherit autotools pkgconfig auto-package-libs auto-package-utils

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

RDEPENDS_${PN}-libgstreamer-0.10 = "libglib \
                libgobject \
                libgthread \
                libgmodule \
           		libxml2 \
           		${TARGET_ARCH}/sysroot-libdl \
           		${TARGET_ARCH}/sysroot-libm \
           		${TARGET_ARCH}/sysroot-libstdc++ \
           		${TARGET_ARCH}/sysroot-librt \
           		${TARGET_ARCH}/sysroot-libpthread"

SRC_URI = "http://gstreamer.freedesktop.org/src/gstreamer/gstreamer-${PV}.tar.bz2"

EXTRA_OECONF = "--disable-docs-build --disable-dependency-tracking --with-check=no --disable-examples --disable-tests --disable-valgrind --disable-debug"


AUTO_PACKAGE_LIBS_LIBDIR = "/usr/lib/:lib: /usr/lib/gstreamer-0.10:lib:"
AUTO_PACKAGE_LIBS_PROVIDEPREFIX = "lib"
AUTO_PACKAGE_LIBS="\
gstcoreelements gstbase-0.10 gstcheck-0.10 gstcontroller-0.10 \
gstdataprotocol-0.10 gstnet-0.10 gstreamer-0.10"

AUTO_PACKAGE_UTILS="\
gst-feedback gst-feedback-0.10 gst-inspect gst-inspect-0.10 \
gst-launch gst-launch-0.10 gst-typefind gst-typefind-0.10 \
gst-xmlinspect gst-xmlinspect-0.10 gst-xmllaunch gst-xmllaunch-0.10"

FILES_${PN}-dbg += " ${libdir}/gstreamer-0.10/.debug/"
