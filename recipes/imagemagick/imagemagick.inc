SUMMARY = "ImageMagick is an image conversion tool"
DESCRIPTION = """
ImageMagick® is a software suite to create, edit, compose, or convert
bitmap images. It can read and write images in a variety of formats (over
200) including PNG, JPEG, JPEG-2000, GIF, TIFF, DPX, EXR, WebP, Postscript,
PDF, and SVG. Use ImageMagick to resize, flip, mirror, rotate, distort,
shear and transform images, adjust image colors, apply various special
effects, or draw text, lines, polygons, ellipses and Bézier curves.
"""
HOMEPAGE = "https://www.imagemagick.org"
LICENSE = "ImageMagick"
DEPENDS = "libbz2 libjpeg libpng libz"

SRC_URI = "ftp://ftp.nluug.nl/pub/ImageMagick/ImageMagick-${PV}.tar.bz2"
S = "${SRCDIR}/ImageMagick-${PV}"

VER = "${@d.get('PV').split('-')[0]}"
VER_MAJ = "${@d.get('VER').split('.')[0]}"

inherit autotools binconfig pkgconfig c++

EXTRA_OECONF = "\
	--program-prefix= \
	--without-x \
	--without-freetype \
	--without-perl \
	--disable-openmp \
	"

EXTRA_OEMAKE += "V=1"

FILES_${PN} += "${libdir}/ImageMagick-${VER}/modules-Q16/*/*.so \
                ${libdir}/ImageMagick-${VER}/modules-Q16/*/*.la \
                ${libdir}/ImageMagick-${VER}/config-Q16/ \
                ${datadir}/ImageMagick-${VER_MAJ}"

FILES_${PN}-dev += "${libdir}/ImageMagick-${VER}/modules-Q16/*/*.a"

FILES_${PN}-dbg += "${libdir}/ImageMagick-${VER}/modules-Q16/*/.debug/*"
