inherit gst-plugins autotools pkgconfig auto-package-libs

RECIPE_FLAGS += "liboil"
DEFAULT_USE_liboil = "1"
COMMON_DEPENDS:USE_liboil = "liboil"
EXTRA_OECONF:>USE_liboil = "--with-liboil"
DEPENDS:>USE_liboil += "${COMMON_DEPENDS}"

SRC_URI = "http://core.fluendo.com/gstreamer/src/${PN}/${PN}-${PV}.tar.bz2"
