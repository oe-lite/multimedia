HOMEPAGE = "http://www.gstreamer.net/"
DESCRIPTION = "GStreamer Bad Plug-ins is a set of plug-ins that aren't up to par compared to the rest."

inherit gst-plugins autotools-autoreconf pkgconfig

DEPENDS += "\
libgstbase \
directfb \
libz \
libts \
"

EXTRA_OECONF += "--disable-examples --disable-experimental --disable-sdl --disable-cdaudio \
                 --disable-vdpau --disable-apexsink --disable-decklink"

RDEPENDS_${PN} += " \
libgstbase \
directfb \
libz \
libts \
"

FILES_${PN} = "\
${base_libdir}/*${SOLIBS} \
${libdir}/lib*${SOLIBS} \
"
PROVIDES_${PN} = "libgstbad"
DEPENDS_${PN} += "libgstbase ${PN}-dev_${PV}"
DEPENDS_${PN}-dev = ""

inherit auto-package-libs
AUTO_PACKAGE_LIBS = "\
adpcmdec \
adpcmenc \
aiff \
asfmux \
autoconvert \
bayer \
camerabin \
cdxaparse \
coloreffects \
colorspace \
dataurisrc \
dccp \
debugutilsbad \
dfbvideosink \
dtmf \
dvb \
dvbsuboverlay \
dvdspu \
fbdevsink \
festival \
fieldanalysis \
fragmented \
freeze \
frei0r \
gaudieffects \
geometrictransform \
h264parse \
hdvparse \
id3tag \
interlace \
invtelecine \
ivfparse \
jp2kdecimator \
jpegformat \
legacyresample \
linsys \
liveadder \
mpeg4videoparse \
mpegdemux \
mpegpsmux \
mpegtsdemux \
mpegtsmux \
mpegvideoparse \
mve \
mxf \
nsf \
nuvdemux \
patchdetect \
pcapparse \
pnm \
rawparse \
rfbsrc \
rtpmux \
rtpvp8 \
scaletempoplugin \
sdi \
sdpelem \
segmentclip \
shm \
siren \
speed \
stereo \
subenc \
tta \
vcdsrc \
videofiltersbad \
videomaxrate \
videomeasure \
videoparsersbad \
videosignal \
vmnc \
y4mdec \
"

RDEPENDS_${PN}-all = "${LIBS_AUTO_PACKAGES}"
PROVIDES_${PN}-all = "gst-plugins-bad"

RDEPENDS_${PN}-fieldanalysis += "${PN}"
RDEPENDS_${PN}-camerabin += "${PN}"
