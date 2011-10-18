DESCRIPTION = "orc - The Oil Runtime Compiler"
HOMEPAGE = "http://code.entropywave.com/projects/orc/"
LICENSE = "orc"

SRC_URI = "http://code.entropywave.com/download/${PN}/${PN}-${PV}.tar.gz;name=${PN}"

inherit autotools-autoreconf pkgconfig c

RECIPE_TYPES = "machine native"
DEPENDS += "libm librt"

PACKAGES =+ "${PN}-examples"
FILES_${PN}-examples = "${libdir}/${PN}/*"
FILES_${PN} = "${bindir}/*"
FILES_${PN}-doc += "${datadir}/gtk-doc/"
DEPENDS_${PN}-dev = ""
DEPENDS_${PN} += "${PN}-dev ${PN}-liborc ${PN}-liborc-test"
RDEPENDS_${PN} += "${PN}-liborc ${PN}-liborc-test libm librt"

inherit auto-package-libs
AUTO_PACKAGE_LIBS_LIBDIR = "${libdir}:lib:-${LIBV}"
AUTO_PACKAGE_LIBS_DEV_DEPENDS = "${PN}-dev"
AUTO_PACKAGE_LIBS = "\
orc \
orc-test \
"
RDEPENDS_${PN}-liborc-test += "${PN}-liborc"
DEPENDS_${PN}-liborc-test += "${PN}-liborc"