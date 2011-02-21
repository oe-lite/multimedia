DEPENDS =+ "gstreamer-dev \
            libgstreamer-0.10 libgstbase-0.10 libgstcheck-0.10 libgstcontroller-0.10 \
            libgstdataprotocol-0.10 libgstnet-0.10"

SRC_URI = "http://gstreamer.freedesktop.org/src/${PN}/${PN}-${PV}.tar.bz2"

EXTRA_OECONF = "--disable-orc --x-includes=${STAGE_DIR}/sysroot/usr/include --x-libraries=${STAGE_DIR}/sysroot/usr/lib "

acpaths = "-I ${S}/common/m4 -I ${S}/m4"

LIBV = "0.10"
FILES_${PN}-dbg += "${libdir}/gstreamer-${LIBV}/.debug"
