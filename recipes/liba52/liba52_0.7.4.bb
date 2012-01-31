DESCRIPTION = "Library for reading some sort of media format."
HOMEPAGE = "http://liba52.sourceforge.net/"
LICENSE = "GPLv2+"
DEPENDS = "libm"
PRIORITY = "optional"

inherit autotools

SRC_URI = "http://liba52.sourceforge.net/files/a52dec-${PV}.tar.gz"

S = "${SRCDIR}/a52dec-${PV}"

EXTRA_OECONF = " --enable-shared "

PACKAGES =+ "${PN}-a52dec ${PN}-a52dec-dbg ${PN}-a52dec-doc"

PROVIDES_${PN}-a52dec = "a52dec"
PROVIDES_${PN}-a52dec-dbg = "a52dec-dbg"
PROVIDES_${PN}-a52dec-doc = "a52dec-doc"

FILES_${PN} = " ${libdir}/liba52.so.0 ${libdir}/liba52.so.0.0.0 " 
FILES_${PN}-dev = " ${includedir}/a52dec/*.h ${libdir}/liba52.so ${libdir}/liba52.la ${libdir}/liba52.a "
FILES_${PN}-dbg = " ${libdir}/.debug/*"
FILES_${PN}-a52dec = " ${bindir}/* "
FILES_${PN}-a52dec-dbg = " ${bindir}/.debug/* "
FILES_${PN}-a52dec-doc = " ${mandir}/man1/* "
