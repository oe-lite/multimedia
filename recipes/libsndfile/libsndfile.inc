SUMMARY = "Libsndfile is a C library for reading and writing files containing sampled sound"
HOMEPAGE = "http://www.mega-nerd.com/libsndfile/"
LICENSE = "LGPL-2.1 | LGPL-3.0"

inherit c c++ autotools pkgconfig library auto-package-utils

DEPENDS = "libm"

RECIPE_TYPES = "machine native sdk"
EXTRA_OECONF += "--disable-sqlite --disable-external-libs"

SRC_URI = "http://www.mega-nerd.com/libsndfile/files/libsndfile-${PV}.tar.gz"

AUTO_PACKAGE_UTILS = " \
	sndfile-cmp	\
	sndfile-deinterleave	\
	sndfile-metadata-get	\
	sndfile-regtest	\
	sndfile-concat	\
	sndfile-info	\
	sndfile-metadata-set	\
	sndfile-salvage	\
	sndfile-convert	\
	sndfile-interleave	\
	sndfile-play	\
"

AUTO_PACKAGE_UTILS_RDEPENDS += "${PN}"

PACKAGES += "${PN}-all"
RDEPENDS_${PN}-all = "${AUTO_PACKAGE_UTILS_PACKAGES}"

