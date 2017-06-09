################################################################################
#
# grub2efi64
#
################################################################################

GRUB2EFI64_VERSION = 2.02
GRUB2EFI64_SOURCE = grub-$(GRUB2EFI64_VERSION).tar.gz
GRUB2EFI64_SITE = ftp://ftp.gnu.org/gnu/grub
GRUB2EFI64_LICENSE = GPLv3
GRUB2EFI64_LICENSE_FILES = COPYING

GRUB2EFI64_CONF_ENV = \
	CPP="$(TARGET_CC) -E"
GRUB2EFI64_CONF_OPTS = --disable-nls --disable-efiemu --disable-mm-debug \
	--disable-cache-stats --disable-boot-time --disable-grub-mkfont \
	--disable-grub-mount --enable-device-mapper \
	--disable-liblzma --disable-libzfs --with-platform=efi --target=x86_64

define GRUB2EFI64_CLEANUP
	rm -fv $(TARGET_DIR)/usr/lib/grub/x86_64-efi/*.image
	rm -fv $(TARGET_DIR)/usr/lib/grub/x86_64-efi/*.module
	rm -fv $(TARGET_DIR)/usr/lib/grub/x86_64-efi/kernel.exec
	rm -fv $(TARGET_DIR)/usr/lib/grub/x86_64-efi/gdb_grub
	rm -fv $(TARGET_DIR)/usr/lib/grub/x86_64-efi/gmodule.pl
	rm -fv $(TARGET_DIR)/etc/bash_completion.d/grub
	rmdir -v $(TARGET_DIR)/etc/bash_completion.d/
endef
GRUB2EFI64_POST_INSTALL_TARGET_HOOKS += GRUB2EFI64_CLEANUP

ifeq ($(BR2_i386),y)
GRUB2EFI64_CHECK_BIN_ARCH_EXCLUSIONS = \
/usr/lib/grub/x86_64-efi/hfs.mod \
/usr/lib/grub/x86_64-efi/cbtime.mod \
/usr/lib/grub/x86_64-efi/ufs1_be.mod \
/usr/lib/grub/x86_64-efi/archelp.mod \
/usr/lib/grub/x86_64-efi/tftp.mod \
/usr/lib/grub/x86_64-efi/bfs.mod \
/usr/lib/grub/x86_64-efi/acpi.mod \
/usr/lib/grub/x86_64-efi/password_pbkdf2.mod \
/usr/lib/grub/x86_64-efi/kernel.img \
/usr/lib/grub/x86_64-efi/gcry_md4.mod \
/usr/lib/grub/x86_64-efi/gcry_whirlpool.mod \
/usr/lib/grub/x86_64-efi/video_fb.mod \
/usr/lib/grub/x86_64-efi/btrfs.mod \
/usr/lib/grub/x86_64-efi/blocklist.mod \
/usr/lib/grub/x86_64-efi/usb.mod \
/usr/lib/grub/x86_64-efi/file.mod \
/usr/lib/grub/x86_64-efi/gcry_md5.mod \
/usr/lib/grub/x86_64-efi/usbserial_usbdebug.mod \
/usr/lib/grub/x86_64-efi/usbms.mod \
/usr/lib/grub/x86_64-efi/syslinuxcfg.mod \
/usr/lib/grub/x86_64-efi/disk.mod \
/usr/lib/grub/x86_64-efi/multiboot.mod \
/usr/lib/grub/x86_64-efi/xfs.mod \
/usr/lib/grub/x86_64-efi/gcry_seed.mod \
/usr/lib/grub/x86_64-efi/romfs.mod \
/usr/lib/grub/x86_64-efi/linux.mod \
/usr/lib/grub/x86_64-efi/gptsync.mod \
/usr/lib/grub/x86_64-efi/gcry_rsa.mod \
/usr/lib/grub/x86_64-efi/part_dvh.mod \
/usr/lib/grub/x86_64-efi/serial.mod \
/usr/lib/grub/x86_64-efi/legacycfg.mod \
/usr/lib/grub/x86_64-efi/loopback.mod \
/usr/lib/grub/x86_64-efi/nilfs2.mod \
/usr/lib/grub/x86_64-efi/video_colors.mod \
/usr/lib/grub/x86_64-efi/raid5rec.mod \
/usr/lib/grub/x86_64-efi/sfs.mod \
/usr/lib/grub/x86_64-efi/div.mod \
/usr/lib/grub/x86_64-efi/part_acorn.mod \
/usr/lib/grub/x86_64-efi/diskfilter.mod \
/usr/lib/grub/x86_64-efi/fixvideo.mod \
/usr/lib/grub/x86_64-efi/xnu.mod \
/usr/lib/grub/x86_64-efi/setpci.mod \
/usr/lib/grub/x86_64-efi/echo.mod \
/usr/lib/grub/x86_64-efi/cryptodisk.mod \
/usr/lib/grub/x86_64-efi/signature_test.mod \
/usr/lib/grub/x86_64-efi/iso9660.mod \
/usr/lib/grub/x86_64-efi/usbserial_common.mod \
/usr/lib/grub/x86_64-efi/gcry_dsa.mod \
/usr/lib/grub/x86_64-efi/test_blockarg.mod \
/usr/lib/grub/x86_64-efi/cat.mod \
/usr/lib/grub/x86_64-efi/terminfo.mod \
/usr/lib/grub/x86_64-efi/cbtable.mod \
/usr/lib/grub/x86_64-efi/lvm.mod \
/usr/lib/grub/x86_64-efi/testspeed.mod \
/usr/lib/grub/x86_64-efi/gcry_twofish.mod \
/usr/lib/grub/x86_64-efi/part_sun.mod \
/usr/lib/grub/x86_64-efi/efifwsetup.mod \
/usr/lib/grub/x86_64-efi/morse.mod \
/usr/lib/grub/x86_64-efi/exfctest.mod \
/usr/lib/grub/x86_64-efi/spkmodem.mod \
/usr/lib/grub/x86_64-efi/fshelp.mod \
/usr/lib/grub/x86_64-efi/trig.mod \
/usr/lib/grub/x86_64-efi/gcry_sha256.mod \
/usr/lib/grub/x86_64-efi/gcry_idea.mod \
/usr/lib/grub/x86_64-efi/priority_queue.mod \
/usr/lib/grub/x86_64-efi/aout.mod \
/usr/lib/grub/x86_64-efi/ldm.mod \
/usr/lib/grub/x86_64-efi/legacy_password_test.mod \
/usr/lib/grub/x86_64-efi/hfspluscomp.mod \
/usr/lib/grub/x86_64-efi/afs.mod \
/usr/lib/grub/x86_64-efi/gcry_tiger.mod \
/usr/lib/grub/x86_64-efi/font.mod \
/usr/lib/grub/x86_64-efi/offsetio.mod \
/usr/lib/grub/x86_64-efi/zfs.mod \
/usr/lib/grub/x86_64-efi/part_dfly.mod \
/usr/lib/grub/x86_64-efi/minix_be.mod \
/usr/lib/grub/x86_64-efi/backtrace.mod \
/usr/lib/grub/x86_64-efi/gcry_rijndael.mod \
/usr/lib/grub/x86_64-efi/ehci.mod \
/usr/lib/grub/x86_64-efi/xnu_uuid.mod \
/usr/lib/grub/x86_64-efi/gfxterm.mod \
/usr/lib/grub/x86_64-efi/cpuid.mod \
/usr/lib/grub/x86_64-efi/odc.mod \
/usr/lib/grub/x86_64-efi/fat.mod \
/usr/lib/grub/x86_64-efi/cmp_test.mod \
/usr/lib/grub/x86_64-efi/lssal.mod \
/usr/lib/grub/x86_64-efi/macbless.mod \
/usr/lib/grub/x86_64-efi/sleep.mod \
/usr/lib/grub/x86_64-efi/boot.mod \
/usr/lib/grub/x86_64-efi/keystatus.mod \
/usr/lib/grub/x86_64-efi/mmap.mod \
/usr/lib/grub/x86_64-efi/xnu_uuid_test.mod \
/usr/lib/grub/x86_64-efi/configfile.mod \
/usr/lib/grub/x86_64-efi/lsefimmap.mod \
/usr/lib/grub/x86_64-efi/cpio.mod \
/usr/lib/grub/x86_64-efi/search.mod \
/usr/lib/grub/x86_64-efi/loadbios.mod \
/usr/lib/grub/x86_64-efi/uhci.mod \
/usr/lib/grub/x86_64-efi/part_apple.mod \
/usr/lib/grub/x86_64-efi/lsmmap.mod \
/usr/lib/grub/x86_64-efi/zfsinfo.mod \
/usr/lib/grub/x86_64-efi/gcry_blowfish.mod \
/usr/lib/grub/x86_64-efi/all_video.mod \
/usr/lib/grub/x86_64-efi/videoinfo.mod \
/usr/lib/grub/x86_64-efi/raid6rec.mod \
/usr/lib/grub/x86_64-efi/gettext.mod \
/usr/lib/grub/x86_64-efi/jpeg.mod \
/usr/lib/grub/x86_64-efi/bswap_test.mod \
/usr/lib/grub/x86_64-efi/geli.mod \
/usr/lib/grub/x86_64-efi/hello.mod \
/usr/lib/grub/x86_64-efi/hashsum.mod \
/usr/lib/grub/x86_64-efi/ls.mod \
/usr/lib/grub/x86_64-efi/at_keyboard.mod \
/usr/lib/grub/x86_64-efi/ata.mod \
/usr/lib/grub/x86_64-efi/minicmd.mod \
/usr/lib/grub/x86_64-efi/iorw.mod \
/usr/lib/grub/x86_64-efi/png.mod \
/usr/lib/grub/x86_64-efi/gcry_rfc2268.mod \
/usr/lib/grub/x86_64-efi/video.mod \
/usr/lib/grub/x86_64-efi/keylayouts.mod \
/usr/lib/grub/x86_64-efi/cbfs.mod \
/usr/lib/grub/x86_64-efi/part_msdos.mod \
/usr/lib/grub/x86_64-efi/ahci.mod \
/usr/lib/grub/x86_64-efi/setjmp_test.mod \
/usr/lib/grub/x86_64-efi/minix2.mod \
/usr/lib/grub/x86_64-efi/testload.mod \
/usr/lib/grub/x86_64-efi/gcry_sha512.mod \
/usr/lib/grub/x86_64-efi/pcidump.mod \
/usr/lib/grub/x86_64-efi/pbkdf2.mod \
/usr/lib/grub/x86_64-efi/linux16.mod \
/usr/lib/grub/x86_64-efi/gcry_serpent.mod \
/usr/lib/grub/x86_64-efi/search_fs_uuid.mod \
/usr/lib/grub/x86_64-efi/gcry_sha1.mod \
/usr/lib/grub/x86_64-efi/shift_test.mod \
/usr/lib/grub/x86_64-efi/ohci.mod \
/usr/lib/grub/x86_64-efi/normal.mod \
/usr/lib/grub/x86_64-efi/verify.mod \
/usr/lib/grub/x86_64-efi/dm_nv.mod \
/usr/lib/grub/x86_64-efi/mdraid09.mod \
/usr/lib/grub/x86_64-efi/tar.mod \
/usr/lib/grub/x86_64-efi/random.mod \
/usr/lib/grub/x86_64-efi/http.mod \
/usr/lib/grub/x86_64-efi/pbkdf2_test.mod \
/usr/lib/grub/x86_64-efi/cmdline_cat_test.mod \
/usr/lib/grub/x86_64-efi/cs5536.mod \
/usr/lib/grub/x86_64-efi/gcry_des.mod \
/usr/lib/grub/x86_64-efi/test.mod \
/usr/lib/grub/x86_64-efi/crypto.mod \
/usr/lib/grub/x86_64-efi/halt.mod \
/usr/lib/grub/x86_64-efi/hfsplus.mod \
/usr/lib/grub/x86_64-efi/search_label.mod \
/usr/lib/grub/x86_64-efi/mpi.mod \
/usr/lib/grub/x86_64-efi/play.mod \
/usr/lib/grub/x86_64-efi/gzio.mod \
/usr/lib/grub/x86_64-efi/multiboot2.mod \
/usr/lib/grub/x86_64-efi/video_cirrus.mod \
/usr/lib/grub/x86_64-efi/scsi.mod \
/usr/lib/grub/x86_64-efi/ntfscomp.mod \
/usr/lib/grub/x86_64-efi/lsefi.mod \
/usr/lib/grub/x86_64-efi/bitmap.mod \
/usr/lib/grub/x86_64-efi/usbserial_ftdi.mod \
/usr/lib/grub/x86_64-efi/bitmap_scale.mod \
/usr/lib/grub/x86_64-efi/squash4.mod \
/usr/lib/grub/x86_64-efi/efi_uga.mod \
/usr/lib/grub/x86_64-efi/time.mod \
/usr/lib/grub/x86_64-efi/ext2.mod \
/usr/lib/grub/x86_64-efi/datehook.mod \
/usr/lib/grub/x86_64-efi/terminal.mod \
/usr/lib/grub/x86_64-efi/relocator.mod \
/usr/lib/grub/x86_64-efi/ntfs.mod \
/usr/lib/grub/x86_64-efi/procfs.mod \
/usr/lib/grub/x86_64-efi/macho.mod \
/usr/lib/grub/x86_64-efi/xzio.mod \
/usr/lib/grub/x86_64-efi/lsefisystab.mod \
/usr/lib/grub/x86_64-efi/msdospart.mod \
/usr/lib/grub/x86_64-efi/probe.mod \
/usr/lib/grub/x86_64-efi/gcry_rmd160.mod \
/usr/lib/grub/x86_64-efi/elf.mod \
/usr/lib/grub/x86_64-efi/div_test.mod \
/usr/lib/grub/x86_64-efi/minix3.mod \
/usr/lib/grub/x86_64-efi/part_bsd.mod \
/usr/lib/grub/x86_64-efi/part_plan.mod \
/usr/lib/grub/x86_64-efi/udf.mod \
/usr/lib/grub/x86_64-efi/tga.mod \
/usr/lib/grub/x86_64-efi/regexp.mod \
/usr/lib/grub/x86_64-efi/gcry_arcfour.mod \
/usr/lib/grub/x86_64-efi/lspci.mod \
/usr/lib/grub/x86_64-efi/newc.mod \
/usr/lib/grub/x86_64-efi/videotest.mod \
/usr/lib/grub/x86_64-efi/gfxterm_background.mod \
/usr/lib/grub/x86_64-efi/password.mod \
/usr/lib/grub/x86_64-efi/memrw.mod \
/usr/lib/grub/x86_64-efi/usbserial_pl2303.mod \
/usr/lib/grub/x86_64-efi/cmp.mod \
/usr/lib/grub/x86_64-efi/ufs2.mod \
/usr/lib/grub/x86_64-efi/usb_keyboard.mod \
/usr/lib/grub/x86_64-efi/affs.mod \
/usr/lib/grub/x86_64-efi/gcry_camellia.mod \
/usr/lib/grub/x86_64-efi/mdraid1x.mod \
/usr/lib/grub/x86_64-efi/functional_test.mod \
/usr/lib/grub/x86_64-efi/pata.mod \
/usr/lib/grub/x86_64-efi/part_gpt.mod \
/usr/lib/grub/x86_64-efi/reboot.mod \
/usr/lib/grub/x86_64-efi/cbls.mod \
/usr/lib/grub/x86_64-efi/videotest_checksum.mod \
/usr/lib/grub/x86_64-efi/reiserfs.mod \
/usr/lib/grub/x86_64-efi/exfat.mod \
/usr/lib/grub/x86_64-efi/memdisk.mod \
/usr/lib/grub/x86_64-efi/gcry_cast5.mod \
/usr/lib/grub/x86_64-efi/lsacpi.mod \
/usr/lib/grub/x86_64-efi/ctz_test.mod \
/usr/lib/grub/x86_64-efi/datetime.mod \
/usr/lib/grub/x86_64-efi/cbmemc.mod \
/usr/lib/grub/x86_64-efi/setjmp.mod \
/usr/lib/grub/x86_64-efi/hdparm.mod \
/usr/lib/grub/x86_64-efi/minix3_be.mod \
/usr/lib/grub/x86_64-efi/read.mod \
/usr/lib/grub/x86_64-efi/part_sunpc.mod \
/usr/lib/grub/x86_64-efi/chain.mod \
/usr/lib/grub/x86_64-efi/progress.mod \
/usr/lib/grub/x86_64-efi/parttool.mod \
/usr/lib/grub/x86_64-efi/eval.mod \
/usr/lib/grub/x86_64-efi/jfs.mod \
/usr/lib/grub/x86_64-efi/nativedisk.mod \
/usr/lib/grub/x86_64-efi/true.mod \
/usr/lib/grub/x86_64-efi/loadenv.mod \
/usr/lib/grub/x86_64-efi/usbtest.mod \
/usr/lib/grub/x86_64-efi/tr.mod \
/usr/lib/grub/x86_64-efi/gfxmenu.mod \
/usr/lib/grub/x86_64-efi/adler32.mod \
/usr/lib/grub/x86_64-efi/search_fs_file.mod \
/usr/lib/grub/x86_64-efi/bsd.mod \
/usr/lib/grub/x86_64-efi/mul_test.mod \
/usr/lib/grub/x86_64-efi/bufio.mod \
/usr/lib/grub/x86_64-efi/help.mod \
/usr/lib/grub/x86_64-efi/sleep_test.mod \
/usr/lib/grub/x86_64-efi/gfxterm_menu.mod \
/usr/lib/grub/x86_64-efi/cpio_be.mod \
/usr/lib/grub/x86_64-efi/mdraid09_be.mod \
/usr/lib/grub/x86_64-efi/part_amiga.mod \
/usr/lib/grub/x86_64-efi/video_bochs.mod \
/usr/lib/grub/x86_64-efi/minix.mod \
/usr/lib/grub/x86_64-efi/gcry_crc.mod \
/usr/lib/grub/x86_64-efi/zfscrypt.mod \
/usr/lib/grub/x86_64-efi/minix2_be.mod \
/usr/lib/grub/x86_64-efi/ufs1.mod \
/usr/lib/grub/x86_64-efi/extcmd.mod \
/usr/lib/grub/x86_64-efi/hexdump.mod \
/usr/lib/grub/x86_64-efi/luks.mod \
/usr/lib/grub/x86_64-efi/appleldr.mod \
/usr/lib/grub/x86_64-efi/crc64.mod \
/usr/lib/grub/x86_64-efi/lzopio.mod \
/usr/lib/grub/x86_64-efi/net.mod \
/usr/lib/grub/x86_64-efi/date.mod \
/usr/lib/grub/x86_64-efi/efi_gop.mod \
/usr/lib/grub/x86_64-efi/efinet.mod
endif

$(eval $(autotools-package))
