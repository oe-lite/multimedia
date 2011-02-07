require gst-common.inc
DESCRIPTION = "Plugins for GStreamer"
DEPENDS =+ "gstreamer-dev libogg-dev libvorbis-dev"

#PARALLEL_MAKE= ""
#PACKAGES_DYNAMIC = "gst-plugin-* libgst*"

SRC_URI = "http://gstreamer.freedesktop.org/src/${PN}/${PN}-${PV}.tar.bz2"

EXTRA_OECONF = "--disable-aalib --disable-shout2 --disable-sdl --disable-cdaudio --disable-orc --x-includes=${STAGE_DIR}/sysroot/usr/include --x-libraries=${STAGE_DIR}/sysroot/usr/lib "

acpaths = "-I ${S}/common/m4 -I ${S}/m4"

OE_LT_RPATH_ALLOW = "any"
OE_LT_RPATH_ALLOW[export]="1"

LIBV = "0.10"

python populate_packages_prepend () {
	gst_libdir = bb.data.expand('${libdir}/gstreamer-${LIBV}', d)
	postinst = bb.data.getVar('plugin_postinst', d, 1)
	glibdir = bb.data.expand('${libdir}', d)

	do_split_packages(d, glibdir, '^libgst(.*)-.*\.so\..*', 'libgst%s', 'gstreamer %s library', aux_files_pattern="${libdir}/libgst%s-*.so.0")
	do_split_packages(d, gst_libdir, '^libgst(.*)\.so$', 'gst-plugin-%s', 'GStreamer plugin for %s', postinst=postinst)
	do_split_packages(d, gst_libdir, '^libgst(.*)\.l?a$', 'gst-plugin-%s-dev', 'GStreamer plugin for %s (development files)')
}

ALLOW_EMPTY = "1"
PACKAGES += "${PN}-apps"
FILES_${PN}-apps = "${bindir}"

FILES_${PN} = ""
FILES_${PN}-dbg += "${libdir}/gstreamer-${LIBV}/.debug"
