# GLTEST

You need to install libbsd-dev

if you are using ubuntu

sudo apt-get install  libbsd-dev
if you are using centOS

sudo yum install  libbsd-devel



Install RHEL EPEL Repos

wget http://dl.fedoraproject.org/pub/epel/6/x86_64/epel-release-6-8.noarch.rpm
wget http://rpms.famillecollet.com/enterprise/remi-release-6.rpm
sudo rpm -Uvh remi-release-6*.rpm epel-release-6*.rpm

Yum for libbsd-devel

yum install libbsd-devel

Reference: Installing RHEL EPEL Repo on Centos 5.x or 6.x, pkgs.org


Use -lbsd option to compile
gcc Binary_knight.c -o Binary_knight -lbsd
