DESCRIPTION = "Library for reading some sort of media format."
HOMEPAGE = "http://liba52.sourceforge.net/"
LICENSE = "GPL-2.0+"

COMPATIBLE_HOST_ARCHS = ".*linux"

inherit autotools-autoreconf library

SRC_URI = "http://liba52.sourceforge.net/files/a52dec-${PV}.tar.gz"
S = "${SRCDIR}/a52dec-${PV}"
SRC_URI += "file://buildcleanup.patch"

DEPENDS = "libm"

EXTRA_OECONF = "--enable-shared "

inherit auto-package-utils
AUTO_PACKAGE_UTILS = "a52dec extract_a52"
