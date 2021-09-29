# Maintainer: Gabriel Matthews <axyl.os.linux.com>

pkgname=axyl-dwmblocks
pkgver=1.0
pkgrel=1
pkgdesc="dwmblocks configuration for axyl-dwm"
arch=('x86_64')
url="https://github.com/axyl-os/axyl-dwmblocks-git"
license=('MIT')
makedepends=(git make)
provides=("${pkgname}")
options=(!strip !emptydirs)
source=("git+$url.git")
md5sums=('SKIP')

build() {
    cd "${pkgname}"
    make 
}

package() {
    cd "${pkgname}"

    mkdir -p ${pkgdir}/opt/${pkgname}
    cp -rf * ${pkgdir}/opt/${pkgname}
    make PREFIX=/usr DESTDIR="${pkgdir}" install
}
