DESCRIPTION = "This library provides functions to read, create, and modify mp4 files"
LICENSE = "MPL LGPL2"

COMPATIBLE_HOST_ARCHS = "i.86-.*-.*linux- x86_64-.*-.*linux- powerpc-.*-.*linux- powerpc64-.*-.*linux- arm-.*-.*linux-"

SRC_URI = "https://storage.googleapis.com/google-code-archive-downloads/v2/code.google.com/mp4v2/mp4v2-${PV}.tar.bz2"
SRC_URI += "file://disable_help2man.patch"

inherit c++ autotools auto-package-utils library

DEPENDS += "libm libdl libgcc libc libstdc++"
DEPENDS_${PN} =+ "${DEPENDS}"
RDEPENDS_${PN} =+ "${DEPENDS}"

AUTO_PACKAGE_UTILS = "mp4art mp4chaps mp4extract mp4file \
                      mp4info mp4subtitle mp4tags mp4track mp4trackdump"

AUTO_PACKAGE_UTILS_DEPENDS = "${PN}"
AUTO_PACKAGE_UTILS_RDEPENDS = "${PN}"

LIBRARY_NAME = "libmp4v2"
LIBRARY_VERSION = "1"

PACKAGES += "${PN}-utils"
RDEPENDS_${PN}-utils = "${AUTO_PACKAGE_UTILS_PACKAGES}"
