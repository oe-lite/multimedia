SUMMARY = "Opus is a totally open, royalty-free, highly versatile audio codec"
HOMEPAGE = "https://www.opus-codec.org/"
LICENSE = "BSD-3-Clause"

SRC_URI = "http://downloads.xiph.org/releases/opus/opus-${PV}.tar.gz"

RECIPE_TYPES = "machine native"

inherit autotools
inherit library

DEPENDS += "libm"
DEPENDS_${PN} += "libc libm"
RDEPENDS_${PN} += "libc libm"

# Add -ffast-math to CFLAGS, requires passing --enable-float-approx to configure.
RECIPE_FLAGS += "opus_fast_math"
DEFAULT_USE_opus_fast_math = False
CFLAGS:>USE_opus_fast_math = " -ffast-math"
EXTRA_OECONF:>USE_opus_fast_math = " --enable-float-approx"
