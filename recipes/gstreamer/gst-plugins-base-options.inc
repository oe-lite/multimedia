# FIXME: Currently recipe option overwrites on auto package vars do
# not work. Always define a package which will be empty if option is
# unset
RECIPE_FLAGS += "alsa"
DEPENDS:>USE_alsa += " libasound"
#AUTO_PACKAGE_LIBS:>USE_alsa += " alsa"
#RDEPENDS_${PN}-libalsa:>USE_alsa = "libasound"
RDEPENDS_${PN}-plugins:>USE_alsa += " libasound"

RECIPE_OPTIONS += "vorbis"
VORBIS_OECONF = "--disable-vorbis"
VORBIS_OECONF_RECIPE_OPTION_vorbis = "--enable-vorbis"
VORBIS_DEPENDS = ""
VORBIS_DEPENDS_RECIPE_OPTION_vorbis = "libvorbis"
VORBIS_LIBS = ""
VORBIS_LIBS_RECIPE_OPTION_vorbis = "vorbis"
RDEPENDS_${PN}-libvorbis_append_RECIPE_OPTION_vorbis = "libvorbis"

RECIPE_OPTIONS += "ogg"
OGG_OECONF = "--disable-ogg"
OGG_OECONF_RECIPE_OPTION_ogg = "--enable-ogg"
OGG_DEPENDS = ""
OGG_DEPENDS_RECIPE_OPTION_ogg = "libogg"
OGG_LIBS = ""
OGG_LIBS_RECIPE_OPTION_ogg = "ogg"
RDEPENDS_${PN}-libogg_append_RECIPE_OPTION_ogg = "libogg"

RECIPE_OPTIONS += "video4linux"
V4L_OECONF = "--disable-gst_v4l"
V4L_OECONF_RECIPE_OPTION_video4linux = "--enable-gst_v4l"
V4L_LIBS = ""
V4L_LIBS_RECIPE_OPTION_video4linux = "video4linux"


AUTO_PACKAGE_LIBS += " \
${VORBIS_LIBS} \
${OGG_LIBS} \
${V4L_LIBS} \
"
EXTRA_OECONF += " \
${VORBIS_OECONF} \
${OGG_OECONF} \
${V4L_OECONF} \
"
DEPENDS_append += "${VORBIS_DEPENDS} ${OGG_DEPENDS}"
