DEPENDS += "libdl \
			libpthread \
			libm"

COMPATIBLE_HOST_ARCHS = ".*linux"

inherit autotools-autoreconf pkgconfig mdev passwd

SRC_URI = "ftp://ftp.alsa-project.org/pub/lib/alsa-lib-${PV}.tar.bz2 \
file://mdev.conf \
file://group \
file://passwd \
"

RECIPE_FLAGS += "alsa_audio_users"
DEFAULT_USE_alsa_audio_users = ""

DO_PATCH_UPDATE_AUDIO_GROUP = ""
DO_PATCH_UPDATE_AUDIO_GROUP:USE_alsa_audio_users = "do_patch_update_audio_group"

do_patch[postfuncs] += "${DO_PATCH_UPDATE_AUDIO_GROUP}"
do_patch_update_audio_group[expand] = "3"
do_patch_update_audio_group() {
	sed -i -e 's/^\(audio:x:102:\).*/\1${USE_alsa_audio_users}/'   \
		${SRCDIR}/group
}

EXTRA_OECONF = "--with-cards=pdaudiocf --with-oss=yes --disable-python"

PACKAGES =+ "${PN}-alsa-server ${PN}-libasound ${PN}-alsa-conf-base ${PN}-alsa-conf ${PN}-alsa-doc ${PN}-alsa-dev"

PROVIDES_${PN}-alsa-server = "alsa-server"
PROVIDES_${PN}-libasound = "libasound"
PROVIDES_${PN}-alsa-conf-base = "alsa-conf-base"
PROVIDES_${PN}-alsa-doc = "alsa-doc"
PROVIDES_${PN}-alsa-dev = "alsa-dev"
RPROVIDES_${PN}-alsa-server = "alsa-server"
RPROVIDES_${PN}-libasound = "libasound"
RPROVIDES_${PN}-alsa-conf-base = "alsa-conf-base"
RPROVIDES_${PN}-alsa-doc = "alsa-doc"
RPROVIDES_${PN}-alsa-dev = "alsa-dev"

FILES_${PN}-dbg += "${libdir}/alsa-lib/*/.debu*"
FILES_${PN}-libasound = "${libdir}/libasound.so.* ${mdevdir}"
FILES_${PN}-alsa-server = "${bindir}/*"
FILES_${PN}-alsa-conf = "${datadir}/alsa/"
FILES_${PN}-alsa-dev += "${libdir}/pkgconfig/ /usr/include/ ${datadir}/aclocal/*"
FILES_${PN}-alsa-conf-base = "\
${datadir}/alsa/alsa.conf \
${datadir}/alsa/cards/aliases.conf \
${datadir}/alsa/pcm/default.conf \
${datadir}/alsa/pcm/dmix.conf \
${datadir}/alsa/pcm/dsnoop.conf"

RDEPENDS_${PN}-libasound += "\
alsa-conf-base \
libpthread \
libm \
libdl \
libc \
"

DEPENDS_${PN}-libasound += "\
${PN}-alsa-dev ${PN}-dev \
libpthread \
libm \
libdl \
libc \
"
