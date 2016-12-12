SUMMARY = "an implementation of the Secure Real-time Transport Protocol (SRTP)"
HOMEPAGE = "https://github.com/cisco/libsrtp"
LICENSE = "BSD-3-Clause"

SRC_URI = "https://github.com/cisco/libsrtp/archive/v${PV}.tar.gz"

RECIPE_TYPES = "native machine"
COMPATIBLE_HOST_ARCHS = ".*linux"

inherit autotools pkgconfig
inherit library

DEPENDS = "libz libpcap"
DEPENDS_${PN} = "libz libpcap"
RDEPENDS_${PN} = "libz libpcap"

EXTRA_OECONF = "--enable-syslog --disable-stdout"

RECIPE_FLAGS += "libsrtp_openssl"
DEFAULT_USE_libsrtp_openssl = True

DEP_OPENSSL = ""
DEP_OPENSSL:USE_libsrtp_openssl = "libssl"
DEPENDS += "${DEP_OPENSSL}"
DEPENDS_${PN} += "${DEP_OPENSSL}"
RDEPENDS_${PN} += "${DEP_OPENSSL}"
EXTRA_OECONF:>USE_libsrtp_openssl = " --enable-openssl"

EXTRA_OEMAKE += "all shared_library"

LIBRARY_VERSION = "1"
