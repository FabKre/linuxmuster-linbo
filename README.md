Linuxmuster-linbo is the free and opensource imaging solution for linuxmuster.net. It handles Windows 7 & 10 and Linux operating systems. Via TFTP and Grub's PXE implementation it boots a small linux system (linbofs) with a gui, which can manage all the imaging tasks on the client. Console tools are also available to manage clients and imaging remotely via the server.

Build instructions:

* Install 64bit Ubuntu 16.04.

* Add 32bit Architecture:  
  `sudo dpkg --add-architecture i386`  
  `sudo apt update`

* Install build depends (uses sudo):  
  `./get-depends.sh`

* Build package:  
  `./buildpackage.sh`

For more information take a look at the  [wiki](https://github.com/linuxmuster/linuxmuster-linbo/wiki)
